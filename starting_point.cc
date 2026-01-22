//
// Created by Gastone Pietro Rosati Papini on 10/08/22.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

extern "C" {
    #include "screen_print_c.h"
}
#include "screen_print.h"
#include "server_lib.h"
#include "logvars.h"

// --- MATLAB PRIMITIVES INCLUDE ---
#include "primitives.h"
// --- MATLAB PRIMITIVES INCLUDE ---

#define DEFAULT_SERVER_IP "127.0.0.1"
#define SERVER_PORT 30000  // Server port
#define DT 0.05

// Handler for CTRL-C
#include <signal.h>
static uint32_t server_run = 1;
void intHandler(int signal) {
    server_run = 0;
}

int main(int argc, const char * argv[]) {
    logger.enable(true);

    // Messages variables
    scenario_msg_t scenario_msg;
    manoeuvre_msg_t manoeuvre_msg;
    size_t scenario_msg_size = sizeof(scenario_msg.data_buffer);
    size_t manoeuvre_msg_size = sizeof(manoeuvre_msg.data_buffer);
    uint32_t message_id = 0;

#if not defined( _MSC_VER ) and not defined( _WIN32 )
    // More portable way of supporting signals on UNIX
    struct sigaction act;
    act.sa_handler = intHandler;
    sigaction(SIGINT, &act, NULL);
#else
    signal(SIGINT, intHandler);
#endif

    server_agent_init(DEFAULT_SERVER_IP, SERVER_PORT);

    // Start server of the Agent
    printLine();
    printTable("Waiting for scenario message...", 0);
    printLine();
    while (server_run == 1) {

        // Clean the buffer
        memset(scenario_msg.data_buffer, '\0', scenario_msg_size);

        // Receive scenario message from the environment
        if (server_receive_from_client(&server_run, &message_id, &scenario_msg.data_struct) == 0) {
            // Init time
            static auto start = std::chrono::system_clock::now();
            auto time = std::chrono::system_clock::now()-start;
            double num_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(time).count()/1000.0;
            printLogTitle(message_id, "received message");

            // Data struct
            input_data_str *in = &scenario_msg.data_struct;
            manoeuvre_msg.data_struct.CycleNumber = in->CycleNumber;
            manoeuvre_msg.data_struct.Status = in->Status;

            double v0 = in->VLgtFild;
            double a0 = in->ALgtFild;
            double distTrafficLight = in->TrfLightDist;

            // Example of using log
            logger.log_var("Example", "cycle", in->CycleNumber);
            logger.log_var("Example", "v0", in->VLgtFild);

            // ADD AGENT CODE HERE
            double coef[6];
            double coef_1[6];
            double coef_2[6];
            static double coef_zeros[6] = {0, 0, 0, 0, 0, 0};
            double finalDistance;
            double finalTime;
            double finalVel;
            double finalTime_1;
            double finalVel_1;
            double finalTime_2;
            double finalVel_2;

            double requested_acc = coeffs_a_opt(DT, coef);
            double requested_vel = coeffs_v_opt(DT, coef);

            
            double lookhead_distance = std::max(50.0, v0*5.0);
            static double vmin = 3.0;
            static double vmax = 15.0;
            double vr = requested_vel;
            // double vr = in->RequestedCruisingSpeed;
            double xs = 5.0; //minimum distance at which the traffic light must be green if the vehicle is to pass
            double Ts = xs/vmin; // time to safety space
            double xin = 10.0; // length of intersection
            double Tin = xin/vmin; // time to pass the intersection
            
            static double xstop;
            static double xtr;
            static double T_green;
            static double T_red;

            if(in->NrTrfLights != 0) {
                xtr = distTrafficLight;
                xstop = distTrafficLight - xs / 2.0;
            }
            if(in->NrTrfLights == 0 || xtr >= lookhead_distance) {
                student_pass_primitive(v0, a0, lookhead_distance, vr, vr, 0, 0, coef, &finalVel, &finalTime, coef, &finalVel, &finalTime);
            } else {
                switch (in->TrfLightCurrState) {
                case 1: // green light
                    T_green = 0;
                    T_red = in->TrfLightFirstTimeToChange - Tin;
                    break;
                case 2: // yellow light
                    T_green = in->TrfLightSecondTimeToChange + Ts;
                    T_red = in->TrfLightThirdTimeToChange - Tin;
                    break;
                case 3:
                    T_green = in->TrfLightFirstTimeToChange + Ts;
                    T_red = in->TrfLightSecondTimeToChange - Tin;
                    break;
                default:
                    break;
                }
                if (in->TrfLightCurrState == 1 && distTrafficLight <= xs){
                    printLog(message_id, "Green, distance is less than safety, passing");
                    student_pass_primitive(v0, a0, lookhead_distance, vr, vr, 0, 0, coef, &finalVel, &finalTime, coef, &finalVel, &finalTime);
                } else {
                    student_pass_primitive(v0, a0, xtr, vmin, vmax, T_green, T_red, coef_2, &finalVel_2, &finalTime_2, coef_1, &finalVel_1, &finalTime_1);
                    // char buffer[256];
                    // snprintf(buffer, sizeof(buffer), "coef_1 = [%.3f, %.3f, %.3f, %.3f, %.3f, %.3f]",  coef_1[0], coef_1[1], coef_1[2], coef_1[3], coef_1[4], coef_1[5]);
                    // printLogVar(message_id,"coef_1", buffer);
                    // snprintf(buffer, sizeof(buffer), "coef_1 = [%.3f, %.3f, %.3f, %.3f, %.3f, %.3f]",  coef_2[0], coef_2[1], coef_2[2], coef_2[3], coef_2[4], coef_2[5]);
                    // printLogVar(message_id,"coef_2", buffer);
                    bool coef_1_0 = true, coef_2_0 = true;
                    for (int i = 0; i < 6; i++) {
                        if (coef_1[i] != 0) coef_1_0 = false;
                        if (coef_2[i] != 0) coef_2_0 = false;
                    }
                    if (coef_1_0 && coef_2_0) {
                        student_stop_primitive(v0, a0, xstop, coef, &finalDistance, &finalTime);
                        printLog(message_id, "Stopping");
                    } else {
                        if ((coef_1[3]<0 && coef_2[3]>0) || (coef_1[3]>0 && coef_2[3]<0)) {
                            student_pass_primitive_j0(v0, a0, xtr, vmin, vmax, coef, &finalVel, &finalTime);

                            printLog(message_id, "j0");
                        } else {
                            if (std::abs(coef_1[3]) < std::abs(coef_2[3])) {
                                printLog(message_id, "Taking coef_1");
                                for (int i = 0; i < 6; i++) {
                                    coef[i] = coef_1[i];
                                }
                            } else {
                                printLog(message_id, "Taking coef_2");
                                for (int i = 0; i < 6; i++) {
                                    coef[i] = coef_2[i];
                                }
                            }
                        }
                    }
                }
            }

            // double requested_acc = coeffs_a_opt(DT, coef);
            // double requested_vel = coeffs_v_opt(DT, coef);

            // ADD LOW LEVEL CONTROL CODE HERE
            double P_gain = 0.4;
            double I_gain = 1.0;
            double W_gain = 0.5; // Windup gain

            double requested_acc_limited = std::max(-5.0, std::min(5.0, requested_acc));
            double a0_limited = std::max(-5.0, std::min(5.0, a0));

            double sat_error = (requested_acc_limited - requested_acc) - (a0_limited - a0);
            double error = (requested_acc - a0) + W_gain * sat_error;
            if (std::abs(error) < 0.05) {
                error = 0.0;
            }
            // static double sat_error = 0.0;
            static double integral_error = 0.0;
            integral_error = integral_error + error * DT;
            double requested_pedal = P_gain * error + integral_error * I_gain;
            if (requested_vel < 0.1 && std::abs(v0) < 0.1) {
                integral_error = 0.0;
                requested_pedal = 0.0;
            }

            // double requested_pedal_unsat = P_gain * error + integral_error * I_gain;
            // double requested_pedal_sat = std::max(-5.0, std::min(5.0, requested_pedal_unsat));

            // sat_error = requested_pedal_sat - requested_pedal_unsat;
            // integral_error = integral_error + (error + W_gain*sat_error)* DT;

            manoeuvre_msg.data_struct.RequestedAcc = requested_pedal; //RequestedAcc is actually RequestedPedal
            manoeuvre_msg.data_struct.RequestedSteerWhlAg = 0.0;

            logger.log_var("acc_test", "time", in->ECUupTime);
            logger.log_var("acc_test", "a0", a0);
            logger.log_var("acc_test", "requested_acc", requested_acc);
            logger.log_var("acc_test", "requested_acc_limited", requested_acc);
            logger.log_var("acc_test", "a0_limited", a0);
            logger.log_var("acc_test", "v0", v0);
            logger.log_var("acc_test", "requested_vel", requested_vel);
            logger.write_line("acc_test");
            
            logger.log_var("coef_list", "time", in->ECUupTime);
            logger.log_var("coef_list", "final_time", finalTime);
            logger.log_var("coef_list", "distance", distTrafficLight);
            logger.log_var("coef_list", "coef_1", coef[0]);
            logger.log_var("coef_list", "coef_2", coef[1]);
            logger.log_var("coef_list", "coef_3", coef[2]);
            logger.log_var("coef_list", "coef_4", coef[3]);
            logger.log_var("coef_list", "coef_5", coef[4]);
            logger.log_var("coef_list", "coef_6", coef[5]);
            // logger.log_var("coef_list", "coef_5", coef[6]);
            logger.write_line("coef_list");

            // Write log
            logger.write_line("Example");

            // Screen print
            printLogVar(message_id, "Time", num_seconds);
            printLogVar(message_id, "Status", in->Status);
            printLogVar(message_id, "requested_pedal", requested_pedal);
            printLogVar(message_id, "requested_acc", requested_acc);
            printLogVar(message_id, "a0", a0);
            printLogVar(message_id, "requested_vel", requested_vel);
            printLogVar(message_id, "v0", v0);
            printLogVar(message_id, "CycleNumber", in->CycleNumber);
            printLogVar(message_id, "coef(1)", coef[1]);
            printLogVar(message_id, "coef(2)", coef[2]);

            // Send manoeuvre message to the environment
            if (server_send_to_client(server_run, message_id, &manoeuvre_msg.data_struct) == -1) {
                perror("error send_message()");
                exit(EXIT_FAILURE);
            } else {
                printLogTitle(message_id, "sent message");
            }
        }
    }

    // Close the server of the agent
    server_agent_close();
    return 0;
}


// FOR VISUALIZING THE PLOTS PLEASE GO TO:
// basic_agent_st/matlab/plotter.m