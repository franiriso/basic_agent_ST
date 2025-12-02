/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_primitives_info.c
 *
 * Code generation for function 'a_opt'
 *
 */

/* Include files */
#include "_coder_primitives_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7] = {
      "789ced584d8bd340189ecafa75508bb25e04e9c18b07372b5d177aacedda66abe9b24d5b"
      "4124a6c9b41d365f6426d9ed1e57f4262a08fe10ff87678f7a114f82"
      "3f40b069334d1b0ca946a666c97b79fbce93c9f37ed087c9801cff280700b80ca6f6e6e6"
      "d45ff2e3bcefcf80450be339df9f0dc560b6beb6b08fe2af7daf9806",
      "8147641a18b20e673b555347866c1071644160436c6a2e5427481f6950443a6ccd078217"
      "e90fe6a059e041deefca102a072d4707f61007196af3c1ac1fdf22ea"
      "5d5bb21f2f23fa910fe14f769e726d0c6dccf56dd94036c226573515478706c15c5be045"
      "81bbdbe2f87197340d0dc6ab850e1c224583b8201b6aa1ec10d33075",
      "d3c185aa8d5c640c38be53ae723d19234592bd0d12269c2e134dee719838aab762c9184b"
      "968d7444900b37f4a0eea384755f8ba99be2fdf16c35c9b48844c613"
      "9a243459a7793c4b98c7b9c83ca6886a3a3d0dfebb793f8fe45bc4d9cefb375df6860de2"
      "fb7c65c9bac33e78fec2c47f7f7707b1e4fb78f2e2164b3e6aabe24b",
      "fa7fbd1ec1970fe17cbb54ac971eeed8da0877dc5abf8bed61ad1ee4b117c31397078888"
      "59bd3fd3fbbfabfb6a4cdd140f94c8855a20f7a9d5fb9348be457c55"
      "7a4fbbeccbfda9d5fb0fc51f05967cd4d2aaf7eb117cf9105e2f09c6a6b0752c76dbf5de"
      "00b577d5666f0832bd4fbbde5b09ebbe185337c51513f6250d61ffcb",
      "6e653aff3921df28926f11673be75977a9bc33d3a34f6fd9eafbcfddaf1b2cf9a89d767d"
      "17f7adfb368f8eb7b76d11d5ca9dc783fded4390e97b3af41d13d3fa"
      "afee6fbc8426eb693dcfa7e2fec6eb32e3fb9bf75f6e33d5fbf3375ee558f2514babde2f"
      "7b7f5369b89b8d66a3b855d9133a07cd7b5de1b0e8d432bd4fbbde67",
      "e7f93fe3cbcef3f4f9ec3ccf822f3bcf277bff2fe7e2a857",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 7848U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9] = {"Version",
                                    "ResolvedFunctions",
                                    "Checksum",
                                    "EntryPoints",
                                    "CoverageInfo",
                                    "IsPolymorphic",
                                    "PropertyList",
                                    "UUID",
                                    "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8] = {
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 9, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("a_opt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/a_opt.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58489583328));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 1, "Name", emlrtMxCreateString("coef_list"));
  emlrtSetField(xEntryPoints, 1, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 1, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 1, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 1, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/coef_list.m"));
  emlrtSetField(xEntryPoints, 1, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58490740741));
  emlrtSetField(xEntryPoints, 1, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 1, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 2, "Name", emlrtMxCreateString("coeffs_a_opt"));
  emlrtSetField(xEntryPoints, 2, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 2, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 2, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 2, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/coeffs_a_opt.m"));
  emlrtSetField(xEntryPoints, 2, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58490740741));
  emlrtSetField(xEntryPoints, 2, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 2, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 3, "Name", emlrtMxCreateString("coeffs_v_opt"));
  emlrtSetField(xEntryPoints, 3, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 3, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 3, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 3, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/coeffs_v_opt.m"));
  emlrtSetField(xEntryPoints, 3, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58490740741));
  emlrtSetField(xEntryPoints, 3, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 3, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 4, "Name", emlrtMxCreateString("j_opt"));
  emlrtSetField(xEntryPoints, 4, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 4, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 4, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 4, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/j_opt.m"));
  emlrtSetField(xEntryPoints, 4, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58490740741));
  emlrtSetField(xEntryPoints, 4, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 4, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 5, "Name", emlrtMxCreateString("s_opt"));
  emlrtSetField(xEntryPoints, 5, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 5, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 5, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 5, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/s_opt.m"));
  emlrtSetField(xEntryPoints, 5, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58489583328));
  emlrtSetField(xEntryPoints, 5, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 5, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 6, "Name",
                emlrtMxCreateString("student_pass_primitive"));
  emlrtSetField(xEntryPoints, 6, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 6, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 6, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 6, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_pass_primitiv"
          "e.m"));
  emlrtSetField(xEntryPoints, 6, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.597511574));
  emlrtSetField(xEntryPoints, 6, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 6, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 7, "Name",
                emlrtMxCreateString("student_stop_primitive"));
  emlrtSetField(xEntryPoints, 7, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 7, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 7, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 7, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_stop_primitiv"
          "e.m"));
  emlrtSetField(xEntryPoints, 7, "TimeStamp",
                emlrtMxCreateDoubleScalar(739934.53918981482));
  emlrtSetField(xEntryPoints, 7, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 7, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 8, "Name", emlrtMxCreateString("v_opt"));
  emlrtSetField(xEntryPoints, 8, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 8, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 8, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 8, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/v_opt.m"));
  emlrtSetField(xEntryPoints, 8, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.58489583328));
  emlrtSetField(xEntryPoints, 8, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 8, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2568132 (R2024a) Update 1"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("k3X5WS1Jty2ZGW0jRKwYyE"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_primitives_info.c) */
