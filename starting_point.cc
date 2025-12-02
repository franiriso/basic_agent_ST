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
            double lookhead_distance = max(50, v0*5.0);
            // double requested_acc = 0.1;
            // static double requested_vel = 0.0;
            // requested_vel = requested_vel + requested_acc * DT;

            // student_pass_primitive(vel, acc, distTrafficLight, 0, 90, 0, 40, coefT2, &v2, &t2, coefT1, &v1, &t1);
            // student_stop_primitive(vel, acc, distTrafficLight, coef, &maxsf, &tf);

            // static double final_time = 20.0;
            // double requested_acc = a_opt(DT, vel, acc, distTrafficLight, 20, 0, final_time - in->ECUupTime);
            // double requested_vel = v_opt(DT, vel, acc, distTrafficLight, 20, 0, final_time - in->ECUupTime);
            // double coef[6];
            // coef_list(vel, acc, distTrafficLight, requested_vel, requested_acc, final_time, coef);

            double coef[6];
            double finalDistance;
            double finalTime;
            double finalVel;

            // if(distTrafficLight < 50) {
            //     student_stop_primitive(vel, acc, distTrafficLight, coef, &finalDistance, &finalTime);
            // } else {
            //     student_pass_primitive(vel, acc, distTrafficLight, 15, 15, 0, 0, coef, &finalVel, &finalTime, coef, &finalVel, &finalTime);
            // }

            // double requested_acc = a_opt(DT, vel, acc, distTrafficLight, 20, 0, finalTime - in->ECUupTime);
            double requested_acc = coeffs_a_opt(DT, coef);
            // double requested_vel = v_opt(DT, vel, acc, distTrafficLight, 20, 0, finalTime - in->ECUupTime);
            double requested_vel = coeffs_v_opt(DT, coef);

            // ADD LOW LEVEL CONTROL CODE HERE
            // double initial_acc;
            // requested_acc = initial_acc + 
            double P_gain = 0.4;
            double I_gain = 1.0;

            double error = requested_acc - a0;
            static double integral_error = 0.0;
            integral_error = integral_error + error * DT;
            double requested_pedal = P_gain * error + integral_error * I_gain; // Requested pedal
            // double requested_pedal = 1.0;

            manoeuvre_msg.data_struct.RequestedAcc = requested_pedal; //RequestedAcc is actually RequestedPedal
            manoeuvre_msg.data_struct.RequestedSteerWhlAg = 0.0;

            logger.log_var("acc_test", "time", in->ECUupTime);
            logger.log_var("acc_test", "a0", a0);
            logger.log_var("acc_test", "requested_acc", requested_acc);
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