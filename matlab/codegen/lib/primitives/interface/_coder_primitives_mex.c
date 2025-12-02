/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_primitives_mex.c
 *
 * Code generation for function 'a_opt'
 *
 */

/* Include files */
#include "_coder_primitives_mex.h"
#include "_coder_primitives_api.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static const char_T *emlrtEntryPoints[15] = {"a_opt",
                                               "coef_list",
                                               "coeffs_a_opt",
                                               "coeffs_v_opt",
                                               "final_opt_pos_j0",
                                               "final_opt_time_j0_pass",
                                               "final_opt_time_stop",
                                               "final_opt_vel_j0_pass",
                                               "j_opt",
                                               "s_opt",
                                               "student_pass_primitive",
                                               "student_pass_primitive_j0",
                                               "student_stop_primitive",
                                               "student_stop_primitive_j0",
                                               "v_opt"};
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *h_prhs[7];
  const mxArray *l_prhs[7];
  const mxArray *m_prhs[7];
  const mxArray *n_prhs[7];
  const mxArray *p_prhs[7];
  const mxArray *i_prhs[6];
  const mxArray *j_prhs[6];
  const mxArray *k_prhs[6];
  const mxArray *o_prhs[5];
  const mxArray *d_prhs[3];
  const mxArray *e_prhs[3];
  const mxArray *f_prhs[3];
  const mxArray *b_prhs[2];
  const mxArray *c_prhs[2];
  const mxArray *g_prhs[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  mexAtExit(&primitives_atexit);
  /* Module initialization. */
  primitives_initialize();
  st.tls = emlrtRootTLSGlobal;
  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(
      &st, nrhs, &prhs[0], (const char_T **)&emlrtEntryPoints[0], 15)) {
  case 0:
    for (i = 0; i < 7; i++) {
      h_prhs[i] = prhs[i + 1];
    }
    unsafe_a_opt_mexFunction(nlhs, plhs, nrhs - 1, h_prhs);
    break;
  case 1:
    for (i1 = 0; i1 < 6; i1++) {
      i_prhs[i1] = prhs[i1 + 1];
    }
    unsafe_coef_list_mexFunction(nlhs, plhs, nrhs - 1, i_prhs);
    break;
  case 2:
    b_prhs[0] = prhs[1];
    b_prhs[1] = prhs[2];
    unsafe_coeffs_a_opt_mexFunction(nlhs, plhs, nrhs - 1, b_prhs);
    break;
  case 3:
    c_prhs[0] = prhs[1];
    c_prhs[1] = prhs[2];
    unsafe_coeffs_v_opt_mexFunction(nlhs, plhs, nrhs - 1, c_prhs);
    break;
  case 4:
    for (i2 = 0; i2 < 6; i2++) {
      j_prhs[i2] = prhs[i2 + 1];
    }
    unsafe_final_opt_pos_j0_mexFunction(nlhs, plhs, nrhs - 1, j_prhs);
    break;
  case 5:
    d_prhs[0] = prhs[1];
    d_prhs[1] = prhs[2];
    d_prhs[2] = prhs[3];
    unsafe_final_opt_time_j0_pass_mexFunction(nlhs, plhs, nrhs - 1, d_prhs);
    break;
  case 6:
    e_prhs[0] = prhs[1];
    e_prhs[1] = prhs[2];
    e_prhs[2] = prhs[3];
    unsafe_final_opt_time_stop_mexFunction(nlhs, plhs, nrhs - 1, e_prhs);
    break;
  case 7:
    for (i3 = 0; i3 < 6; i3++) {
      k_prhs[i3] = prhs[i3 + 1];
    }
    unsafe_final_opt_vel_j0_pass_mexFunction(nlhs, plhs, nrhs - 1, k_prhs);
    break;
  case 8:
    for (i4 = 0; i4 < 7; i4++) {
      l_prhs[i4] = prhs[i4 + 1];
    }
    unsafe_j_opt_mexFunction(nlhs, plhs, nrhs - 1, l_prhs);
    break;
  case 9:
    for (i5 = 0; i5 < 7; i5++) {
      m_prhs[i5] = prhs[i5 + 1];
    }
    unsafe_s_opt_mexFunction(nlhs, plhs, nrhs - 1, m_prhs);
    break;
  case 10:
    for (i6 = 0; i6 < 7; i6++) {
      n_prhs[i6] = prhs[i6 + 1];
    }
    unsafe_student_pass_primitive_mexFunction(nlhs, plhs, nrhs - 1, n_prhs);
    break;
  case 11:
    for (i7 = 0; i7 < 5; i7++) {
      o_prhs[i7] = prhs[i7 + 1];
    }
    unsafe_student_pass_primitive_j0_mexFunction(nlhs, plhs, nrhs - 1, o_prhs);
    break;
  case 12:
    f_prhs[0] = prhs[1];
    f_prhs[1] = prhs[2];
    f_prhs[2] = prhs[3];
    unsafe_student_stop_primitive_mexFunction(nlhs, plhs, nrhs - 1, f_prhs);
    break;
  case 13:
    g_prhs[0] = prhs[1];
    g_prhs[1] = prhs[2];
    unsafe_student_stop_primitive_j0_mexFunction(nlhs, plhs, nrhs - 1, g_prhs);
    break;
  case 14:
    for (i8 = 0; i8 < 7; i8++) {
      p_prhs[i8] = prhs[i8 + 1];
    }
    unsafe_v_opt_mexFunction(nlhs, plhs, nrhs - 1, p_prhs);
    break;
  }
  /* Module termination. */
  primitives_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void unsafe_a_opt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[7];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        5, "a_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "a_opt");
  }
  /* Call the function. */
  for (i = 0; i < 7; i++) {
    b_prhs[i] = prhs[i];
  }
  a_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_coef_list_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[6];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        9, "coef_list");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "coef_list");
  }
  /* Call the function. */
  for (i = 0; i < 6; i++) {
    b_prhs[i] = prhs[i];
  }
  coef_list_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_coeffs_a_opt_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[2];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        12, "coeffs_a_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "coeffs_a_opt");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  coeffs_a_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_coeffs_v_opt_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[2];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        12, "coeffs_v_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "coeffs_v_opt");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  coeffs_v_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_final_opt_pos_j0_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                         int32_T nrhs, const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[6];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        16, "final_opt_pos_j0");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "final_opt_pos_j0");
  }
  /* Call the function. */
  for (i = 0; i < 6; i++) {
    b_prhs[i] = prhs[i];
  }
  final_opt_pos_j0_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_final_opt_time_j0_pass_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                               int32_T nrhs,
                                               const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[3];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        22, "final_opt_time_j0_pass");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "final_opt_time_j0_pass");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  b_prhs[2] = prhs[2];
  final_opt_time_j0_pass_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_final_opt_time_stop_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                            int32_T nrhs,
                                            const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[3];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        19, "final_opt_time_stop");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "final_opt_time_stop");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  b_prhs[2] = prhs[2];
  final_opt_time_stop_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_final_opt_vel_j0_pass_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                              int32_T nrhs,
                                              const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[6];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        21, "final_opt_vel_j0_pass");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "final_opt_vel_j0_pass");
  }
  /* Call the function. */
  for (i = 0; i < 6; i++) {
    b_prhs[i] = prhs[i];
  }
  final_opt_vel_j0_pass_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_j_opt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[7];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        5, "j_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "j_opt");
  }
  /* Call the function. */
  for (i = 0; i < 7; i++) {
    b_prhs[i] = prhs[i];
  }
  j_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_s_opt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[7];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        5, "s_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "s_opt");
  }
  /* Call the function. */
  for (i = 0; i < 7; i++) {
    b_prhs[i] = prhs[i];
  }
  s_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_student_pass_primitive_j0_mexFunction(int32_T nlhs,
                                                  mxArray *plhs[1],
                                                  int32_T nrhs,
                                                  const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[5];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        25, "student_pass_primitive_j0");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 25,
                        "student_pass_primitive_j0");
  }
  /* Call the function. */
  for (i = 0; i < 5; i++) {
    b_prhs[i] = prhs[i];
  }
  student_pass_primitive_j0_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_student_pass_primitive_mexFunction(int32_T nlhs, mxArray *plhs[6],
                                               int32_T nrhs,
                                               const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[7];
  const mxArray *outputs[6];
  int32_T i;
  int32_T i1;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        22, "student_pass_primitive");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "student_pass_primitive");
  }
  /* Call the function. */
  for (i = 0; i < 7; i++) {
    b_prhs[i] = prhs[i];
  }
  student_pass_primitive_api(b_prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i1 = 1;
  } else {
    i1 = nlhs;
  }
  emlrtReturnArrays(i1, &plhs[0], &outputs[0]);
}

void unsafe_student_stop_primitive_j0_mexFunction(int32_T nlhs,
                                                  mxArray *plhs[3],
                                                  int32_T nrhs,
                                                  const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[3];
  const mxArray *b_prhs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        25, "student_stop_primitive_j0");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 25,
                        "student_stop_primitive_j0");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  student_stop_primitive_j0_api(b_prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void unsafe_student_stop_primitive_mexFunction(int32_T nlhs, mxArray *plhs[3],
                                               int32_T nrhs,
                                               const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[3];
  const mxArray *outputs[3];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        22, "student_stop_primitive");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "student_stop_primitive");
  }
  /* Call the function. */
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  b_prhs[2] = prhs[2];
  student_stop_primitive_api(b_prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void unsafe_v_opt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[7];
  const mxArray *outputs;
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        5, "v_opt");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "v_opt");
  }
  /* Call the function. */
  for (i = 0; i < 7; i++) {
    b_prhs[i] = prhs[i];
  }
  v_opt_api(b_prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_primitives_mex.c) */
