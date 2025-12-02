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
  const char_T *data[9] = {
      "789ced9a5b6f124114c717ada68d518926be99f009d8a52d6d5f2997420bc496d29b1aba"
      "2c03ccb217607609249ad49a684c4c6a7cf1c14f64a25fc0f8e0a34f"
      "c66763a2dc06d8b51ba8d0815de7bc0cb36777fe3367e0b787b3cbb8620917c330b7988e"
      "71eb9df666b7efeeb65718a399fdae6e7bc3d4c7768d99335c87fd67",
      "dd5650150dd4b54e47e165d0bb32a7ca50e1156db751064c152055aa815cdb938712d885"
      "32480d7692ad9e1c1970f53a2d57eb73b00884524a97996a11f56728"
      "0d767af1f866b1deb911e3f1c2221e6e93ff61f8319b46a08ad87c9557601522950da982"
      "2e0345436c3a19db4db2be141b6b46499260a179d4b3078a509000f2",
      "f04ace13d03555516555479e5015d6a05260637b81109be51114327ceb820cd25899d724"
      "3ecb224dcfb58e94798432e52a94a1066bc02bf7d75d1f73dd7787ac"
      "1bfbf3cdbd95326a59cb68cd1d6a4fa87d1ccfe378cc795cb79c47c79353f5ac0426b7df"
      "cf2df58c7eb2fb7d4e945b9bcd0c8ff3ed11d76d6efbe7cfb7dba79f",
      "bd90a4deeffb9fae90d4c3362dbd717faff72cf4dc26bf3f5e88047c5258cc8a2a8aee27"
      "22d1f45a65a33f8f07437486cd83b1e8931a9ff2fedfd67d67c8bab1"
      "bf4fa21a90fab8b72def4f2df58cfe69f11e47b98b7b627c7a4298f72f7ffd5c21a987cd"
      "e9bc8fc344a5bea8a152614738f0ed2d168fc2ab8920e5bddd795f1e",
      "73dd0b43d68dfd820af21909a2ee3fbba971feeb987a0d4b3da39fec3ef7a28bf14e8eb7"
      "5fc8f2fdc3eabbab24f5b0399deffaf2866f29a688fb29094672412e"
      "999657fc0ecae77f585c3f6a1c5f598cef36f96781ef1991fb8b03a4be47a60a83c87573"
      "7bbbe6f5b3795f3f3fca83f7f5638b754d8a53a784f3fab58feffd24",
      "f5b0399dfb3e255111647fac180d1739a5a4272ae974254cb94fb9df315acf31eb19fdb4"
      "9e73b97ab49ed3315acfb9d8f8ff3bf7695de7627ab4ae83cfa7751d"
      "127ab4ae3399f19df9ff1e731e696a79a6decb694da87ddcae79bd2ddecb694599f07b39"
      "af09f3fed9db132f493d6c4ee77dadc16d27fcabc266797df310560e",
      "02875b473044796f77ded37cfe627a349fc7e7d37c9e841ecde72733beb3eb3646becfd0"
      "73daf6c444cebe79fd6cded7cf8f32c9e7b46f0873ffbbbbbe40520f"
      "9bd3b9bfbd198ae4d3a55c614959d98ae75281e5a4be13a5dc770af7c7cdefade2ed36b5"
      "7d229555d49c885df3fb134b3da37f5abcef44d72b93e2d21961cecf",
      "3f727124f5b0399df3e1433110afe5972251b182b2815ae3604d0ed2e7b294f3dd96d671"
      "8ce7d13acee5ead13a4ec7681d67b4f1ff00f83cb49f",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 16968U, &nameCaptureInfo);
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
      emlrtCreateStructMatrix(1, 15, 8, (const char_T **)&epFieldName[0]);
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
                emlrtMxCreateDoubleScalar(739953.564699074));
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
                emlrtMxCreateDoubleScalar(739953.56471064815));
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
                emlrtMxCreateDoubleScalar(739953.564699074));
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
                emlrtMxCreateDoubleScalar(739953.564699074));
  emlrtSetField(xEntryPoints, 3, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 3, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 4, "Name",
                emlrtMxCreateString("final_opt_pos_j0"));
  emlrtSetField(xEntryPoints, 4, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 4, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 4, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 4, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/final_opt_pos_j0.m"));
  emlrtSetField(xEntryPoints, 4, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.5648032407));
  emlrtSetField(xEntryPoints, 4, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 4, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 5, "Name",
                emlrtMxCreateString("final_opt_time_j0_pass"));
  emlrtSetField(xEntryPoints, 5, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 5, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 5, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 5, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/final_opt_time_j0_pas"
          "s.m"));
  emlrtSetField(xEntryPoints, 5, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.55872685183));
  emlrtSetField(xEntryPoints, 5, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 5, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 6, "Name",
                emlrtMxCreateString("final_opt_time_stop"));
  emlrtSetField(xEntryPoints, 6, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 6, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 6, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 6, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous "
          "Driving/IVAD/basic_agent_st/matlab/final_opt_time_stop.m"));
  emlrtSetField(xEntryPoints, 6, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.56476851855));
  emlrtSetField(xEntryPoints, 6, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 6, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 7, "Name",
                emlrtMxCreateString("final_opt_vel_j0_pass"));
  emlrtSetField(xEntryPoints, 7, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 7, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 7, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 7, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/final_opt_vel_j0_pass"
          ".m"));
  emlrtSetField(xEntryPoints, 7, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.55871527782));
  emlrtSetField(xEntryPoints, 7, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 7, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 8, "Name", emlrtMxCreateString("j_opt"));
  emlrtSetField(xEntryPoints, 8, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 8, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 8, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 8, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/j_opt.m"));
  emlrtSetField(xEntryPoints, 8, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.564699074));
  emlrtSetField(xEntryPoints, 8, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 8, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 9, "Name", emlrtMxCreateString("s_opt"));
  emlrtSetField(xEntryPoints, 9, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 9, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 9, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 9, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/s_opt.m"));
  emlrtSetField(xEntryPoints, 9, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.564699074));
  emlrtSetField(xEntryPoints, 9, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 9, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 10, "Name",
                emlrtMxCreateString("student_pass_primitive"));
  emlrtSetField(xEntryPoints, 10, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 10, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 10, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 10, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_pass_primitiv"
          "e.m"));
  emlrtSetField(xEntryPoints, 10, "TimeStamp",
                emlrtMxCreateDoubleScalar(739952.6063888889));
  emlrtSetField(xEntryPoints, 10, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 10, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 11, "Name",
                emlrtMxCreateString("student_pass_primitive_j0"));
  emlrtSetField(xEntryPoints, 11, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 11, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 11, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 11, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_pass_primitiv"
          "e_j0.m"));
  emlrtSetField(xEntryPoints, 11, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.56003472221));
  emlrtSetField(xEntryPoints, 11, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 11, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 12, "Name",
                emlrtMxCreateString("student_stop_primitive"));
  emlrtSetField(xEntryPoints, 12, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 12, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 12, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 12, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_stop_primitiv"
          "e.m"));
  emlrtSetField(xEntryPoints, 12, "TimeStamp",
                emlrtMxCreateDoubleScalar(739934.53918981482));
  emlrtSetField(xEntryPoints, 12, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 12, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 13, "Name",
                emlrtMxCreateString("student_stop_primitive_j0"));
  emlrtSetField(xEntryPoints, 13, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 13, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 13, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 13, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_stop_primitiv"
          "e_j0.m"));
  emlrtSetField(xEntryPoints, 13, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.56807870371));
  emlrtSetField(xEntryPoints, 13, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 13, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 14, "Name", emlrtMxCreateString("v_opt"));
  emlrtSetField(xEntryPoints, 14, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 14, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 14, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 14, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/v_opt.m"));
  emlrtSetField(xEntryPoints, 14, "TimeStamp",
                emlrtMxCreateDoubleScalar(739953.564699074));
  emlrtSetField(xEntryPoints, 14, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 14, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2568132 (R2024a) Update 1"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("ouTP1e2kQKmgi6Gt7pdvlB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_primitives_info.c) */
