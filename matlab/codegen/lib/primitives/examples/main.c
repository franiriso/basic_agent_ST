/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "primitives.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void argInit_1x6_real_T(double result[6]);

static double argInit_real_T(void);

/* Function Definitions */
static void argInit_1x6_real_T(double result[6])
{
  int idx1;
  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 6; idx1++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_a_opt();
  main_coef_list();
  main_coeffs_a_opt();
  main_coeffs_v_opt();
  main_final_opt_pos_j0();
  main_final_opt_time_j0_pass();
  main_final_opt_time_stop();
  main_final_opt_vel_j0_pass();
  main_j_opt();
  main_s_opt();
  main_student_pass_primitive();
  main_student_pass_primitive_j0();
  main_student_stop_primitive();
  main_student_stop_primitive_j0();
  main_v_opt();
  /* Terminate the application.
You do not need to do this more than one time. */
  primitives_terminate();
  return 0;
}

void main_a_opt(void)
{
  double t_tmp;
  /* Initialize function 'a_opt' input arguments. */
  t_tmp = argInit_real_T();
  /* Call the entry-point 'a_opt'. */
  t_tmp = a_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

void main_coef_list(void)
{
  double coef_list_var[6];
  double v0_tmp;
  /* Initialize function 'coef_list' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'coef_list'. */
  coef_list(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, coef_list_var);
}

void main_coeffs_a_opt(void)
{
  double dv[6];
  double b_coeffs_a_opt;
  /* Initialize function 'coeffs_a_opt' input arguments. */
  /* Initialize function input argument 'in2'. */
  /* Call the entry-point 'coeffs_a_opt'. */
  argInit_1x6_real_T(dv);
  b_coeffs_a_opt = coeffs_a_opt(argInit_real_T(), dv);
}

void main_coeffs_v_opt(void)
{
  double dv[6];
  double b_coeffs_v_opt;
  /* Initialize function 'coeffs_v_opt' input arguments. */
  /* Initialize function input argument 'in2'. */
  /* Call the entry-point 'coeffs_v_opt'. */
  argInit_1x6_real_T(dv);
  b_coeffs_v_opt = coeffs_v_opt(argInit_real_T(), dv);
}

void main_final_opt_pos_j0(void)
{
  double v0_tmp;
  /* Initialize function 'final_opt_pos_j0' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'final_opt_pos_j0'. */
  v0_tmp = final_opt_pos_j0(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp);
}

void main_final_opt_time_j0_pass(void)
{
  double final_opt_time_j0_pass_var[2];
  double v0_tmp;
  /* Initialize function 'final_opt_time_j0_pass' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'final_opt_time_j0_pass'. */
  final_opt_time_j0_pass(v0_tmp, v0_tmp, v0_tmp, final_opt_time_j0_pass_var);
}

void main_final_opt_time_stop(void)
{
  double v0_tmp;
  /* Initialize function 'final_opt_time_stop' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'final_opt_time_stop'. */
  v0_tmp = final_opt_time_stop(v0_tmp, v0_tmp, v0_tmp);
}

void main_final_opt_vel_j0_pass(void)
{
  double v0_tmp;
  /* Initialize function 'final_opt_vel_j0_pass' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'final_opt_vel_j0_pass'. */
  v0_tmp =
      final_opt_vel_j0_pass(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp);
}

void main_j_opt(void)
{
  double t_tmp;
  /* Initialize function 'j_opt' input arguments. */
  t_tmp = argInit_real_T();
  /* Call the entry-point 'j_opt'. */
  t_tmp = j_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

void main_s_opt(void)
{
  double t_tmp;
  /* Initialize function 's_opt' input arguments. */
  t_tmp = argInit_real_T();
  /* Call the entry-point 's_opt'. */
  t_tmp = s_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

void main_student_pass_primitive(void)
{
  double coeffsT1[6];
  double coeffsT2[6];
  double T1;
  double T2;
  double v0_tmp;
  double v1;
  double v2;
  /* Initialize function 'student_pass_primitive' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'student_pass_primitive'. */
  student_pass_primitive(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp,
                         coeffsT2, &v2, &T2, coeffsT1, &v1, &T1);
}

void main_student_pass_primitive_j0(void)
{
  double coefsj0[6];
  double v0_tmp;
  /* Initialize function 'student_pass_primitive_j0' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'student_pass_primitive_j0'. */
  student_pass_primitive_j0(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, coefsj0);
}

void main_student_stop_primitive(void)
{
  double coefs[6];
  double maxsf;
  double tf;
  double v0_tmp;
  /* Initialize function 'student_stop_primitive' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'student_stop_primitive'. */
  student_stop_primitive(v0_tmp, v0_tmp, v0_tmp, coefs, &maxsf, &tf);
}

void main_student_stop_primitive_j0(void)
{
  double coefsj0[6];
  double sfj0;
  double tfj0;
  double v0_tmp;
  /* Initialize function 'student_stop_primitive_j0' input arguments. */
  v0_tmp = argInit_real_T();
  /* Call the entry-point 'student_stop_primitive_j0'. */
  student_stop_primitive_j0(v0_tmp, v0_tmp, coefsj0, &sfj0, &tfj0);
}

void main_v_opt(void)
{
  double t_tmp;
  /* Initialize function 'v_opt' input arguments. */
  t_tmp = argInit_real_T();
  /* Call the entry-point 'v_opt'. */
  t_tmp = v_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

/* End of code generation (main.c) */
