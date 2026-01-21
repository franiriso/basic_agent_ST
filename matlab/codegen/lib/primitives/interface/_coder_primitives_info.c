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
  const char_T *data[10] = {
      "789ced5abd6fd34014775141ad281081604042eac0c054a74dd3a6620af968529a9492a4"
      "85f2913ac939b9c41f89cf36695910031253599090f8139861606264"
      "404cb020063698102323711c37b1a995446e2e8d7b6fb93cffe2fbbd7b17fffcf26c6a2c"
      "9e18a328ea2ca5dbdfa83e9e69f99ed67882329b151f6b8d5316dfb0",
      "93d4b8e93c03df6b8d795190415dd61d81e1c1fe990591870223c8e99d2aa02480444e05"
      "8526c2420ea4210f529d4e52f3f86807b4ef6890f6395402f94a4ae1"
      "29a984da11729dce7e3e7ed9ac77bcc77c3cb3c987c782df8b3ca0330848886625468012"
      "44221d16f30a0f0419d199643c9da4675374bc91258e83c5c6d1e90d",
      "5082790ea06946284c07155914445e54d07458822a148a747c2318a6730c82f92ca39d90"
      "4532cd3332c7e468242b05ed489541285b95200f65a88219bebdeeba"
      "c3755fe8b26e03671b7bcb65c5aa9c951b3bd40ca879dc8863db611ca76ce3d09182a8e4"
      "38d0e6fbe890af64cb67c607b0df07a47286ef96c7733daecb3ab6bf",
      "3fd11cdf7e9e85da888b4fb99cbc8e93cfb061f139bd1e2fd9f0792cb86fe1466e6e4e5d"
      "e278752911a92c33817430166ac771ab0b4fb738281b1fd7fcc755cf"
      "ab0ed76d775ff758f0a6f4346ed85915709a3faa3aced8f299f101ec73670ab52d6c1a2e"
      "dd798759c7af4c5d1dc7c967d8a8eaf8451b3e8f050f2c87365182f3",
      "877742eb817c349151fdfe0445747cd475dce9efe77c97751b78bb986ca850bb2c1f593d"
      "2fdaf299f181d6e5462a1b1bead6ba3cf5f3a51f279f61a3aae7bdd6"
      "e58bcbc25a6639c5e4b82d36b6e163c355efd66e98e8f9a8ebb9d3ba7cb2cbba0d3c2f02"
      "36cb41d4eab00d4dc73f38e47b68cb67c607b0cffb29ecdcbf6d9b78",
      "0f4b6fde60d6efafd75e2de2e433ccedfa2d295266613e1607e9ddb579c9975336d78b8a"
      "8bfa2a7f6cceef358fcf6de6f758f0a3a0dfd9b2f7bfffe5b87e4796"
      "266fd9dbaacd87a5e7eebc6f1f9c659cbafff4db0c56dd0f7c7a4dea76eaf0afd7592151"
      "cbf3fe7829162979858a92a86532b508d17da2fbba917e8c95cf8c93",
      "7e8c333ed28fd18df463fa9bffb8eb3ae9cbf4c747fa3283e5237d19dd485fa6bff9ddf9"
      "ffdcd071248bd523f5fea21650f3f8a8d6e547e7fd452d95f8de5f7c"
      "8f59cffd5f1e9fc6c96798dbf57c2e8256361eb1f59c0c77608a4ba94a5d8945899e8fba"
      "9e937abc3f3e528f0f968fd4e3ba917abcbff9dddd5731ebf7117a4e",
      "da0cacec25cf4907fa9cb495659cbaffe23bdee7a4bf3df5499c7c86b95df7d757c25136"
      "5329147dc2c2cdd5422a389f546ec788eebb45f79dd6ef76f9f658c6"
      "b6225545d40864587affc321df135b3e333e2cbdd7b38baf3fb38759e727ee8f7971f219"
      "e6769d8fdc2d075755d6178d956b28175477ee04f810a9ef89ceb746",
      "d2a7317f8ff4699cf1913e8d6ea44fd3dbfcff007b53d8ed",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 18192U, &nameCaptureInfo);
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
                emlrtMxCreateDoubleScalar(739955.80337962962));
  emlrtSetField(xEntryPoints, 10, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 10, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 11, "Name",
                emlrtMxCreateString("student_pass_primitive_j0"));
  emlrtSetField(xEntryPoints, 11, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 11, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 11, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 11, "FullPath",
      emlrtMxCreateString(
          "/Users/franiriso/Documents/UNITN/1S/Intelligent Vehicles and "
          "Autonomous Driving/IVAD/basic_agent_st/matlab/student_pass_primitiv"
          "e_j0.m"));
  emlrtSetField(xEntryPoints, 11, "TimeStamp",
                emlrtMxCreateDoubleScalar(739955.80195601855));
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
                emlrtMxCreateDoubleScalar(739955.80251157412));
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
                emlrtMxCreateString("OqKTFXFnlo7TSSy69py4QD"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_primitives_info.c) */
