/*
 * File: LevitatePingPongEkain.c
 *
 * Code generated for Simulink model 'LevitatePingPongEkain'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Jul 30 10:23:58 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LevitatePingPongEkain.h"
#include "LevitatePingPongEkain_private.h"
#include "LevitatePingPongEkain_dt.h"

/* Block signals (default storage) */
B_LevitatePingPongEkain_T LevitatePingPongEkain_B;

/* Block states (default storage) */
DW_LevitatePingPongEkain_T LevitatePingPongEkain_DW;

/* Real-time model */
RT_MODEL_LevitatePingPongEkai_T LevitatePingPongEkain_M_;
RT_MODEL_LevitatePingPongEkai_T *const LevitatePingPongEkain_M =
  &LevitatePingPongEkain_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAn_p(codertarget_arduinobase_in_pf_T *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCod_p(codertarget_arduinobase_in_pf_T *obj);
static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_int_p_T *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_p_T *obj);
static codertarget_arduinobase_int_p_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_p_T *obj);
static void SystemProp_matlabCodegenSetAn_p(codertarget_arduinobase_in_pf_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCod_p(codertarget_arduinobase_in_pf_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_p(obj, true);
  }
}

static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_int_p_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/PWM' */
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_p_T *obj)
{
  /* Start for MATLABSystem: '<Root>/PWM' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }

  /* End of Start for MATLABSystem: '<Root>/PWM' */
}

static codertarget_arduinobase_int_p_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_p_T *obj)
{
  codertarget_arduinobase_int_p_T *b_obj;

  /* Start for MATLABSystem: '<Root>/PWM' */
  obj->isInitialized = 0L;
  b_obj = obj;
  obj->Hw.AvailablePwmPinNames.f1 = '2';
  obj->Hw.AvailablePwmPinNames.f2 = '3';
  obj->Hw.AvailablePwmPinNames.f3 = '4';
  obj->Hw.AvailablePwmPinNames.f4 = '5';
  obj->Hw.AvailablePwmPinNames.f5 = '6';
  obj->Hw.AvailablePwmPinNames.f6 = '7';
  obj->Hw.AvailablePwmPinNames.f7 = '8';
  obj->Hw.AvailablePwmPinNames.f8 = '9';
  obj->Hw.AvailablePwmPinNames.f9[0] = '1';
  obj->Hw.AvailablePwmPinNames.f9[1] = '0';
  obj->Hw.AvailablePwmPinNames.f10[0] = '1';
  obj->Hw.AvailablePwmPinNames.f10[1] = '1';
  obj->Hw.AvailablePwmPinNames.f11[0] = '1';
  obj->Hw.AvailablePwmPinNames.f11[1] = '2';
  obj->Hw.AvailablePwmPinNames.f12[0] = '1';
  obj->Hw.AvailablePwmPinNames.f12[1] = '3';
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

/* Model step function */
void LevitatePingPongEkain_step(void)
{
  boolean_T p;
  boolean_T p_0;
  real32_T rtb_Sum_n;
  real32_T rtb_Reciprocal;
  real32_T Integrator;
  real32_T TmpSignalConversionAtFilterDiff;
  real32_T Integrator_tmp;

  /* SampleTimeMath: '<S6>/TSamp' incorporates:
   *  Constant: '<S6>/N Copy'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = ( w * Ts )
   */
  rtb_Sum_n = LevitatePingPongEkain_P.PIDDiskretua_N *
    LevitatePingPongEkain_P.TSamp_WtEt;

  /* Math: '<S6>/Reciprocal' incorporates:
   *  Constant: '<S6>/Constant'
   *  Sum: '<S6>/SumDen'
   *
   * About '<S6>/Reciprocal':
   *  Operator: reciprocal
   */
  rtb_Reciprocal = 1.0F / (LevitatePingPongEkain_P.Constant_Value + rtb_Sum_n);

  /* SignalConversion: '<S6>/TmpSignal ConversionAtFilter Differentiator TFInport2' incorporates:
   *  Constant: '<S6>/Constant'
   *  Product: '<S6>/Divide'
   *  Sum: '<S6>/SumNum'
   */
  TmpSignalConversionAtFilterDiff = (rtb_Sum_n -
    LevitatePingPongEkain_P.Constant_Value) * rtb_Reciprocal;

  /* MATLABSystem: '<Root>/Analog Input' */
  p = false;
  p_0 = true;
  if (!(LevitatePingPongEkain_DW.obj.SampleTime ==
        LevitatePingPongEkain_P.AnalogInput_SampleTime)) {
    p_0 = false;
  }

  if (p_0) {
    p = true;
  }

  if (!p) {
    LevitatePingPongEkain_DW.obj.SampleTime =
      LevitatePingPongEkain_P.AnalogInput_SampleTime;
  }

  MW_AnalogIn_Start(LevitatePingPongEkain_DW.obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(LevitatePingPongEkain_DW.obj.MW_ANALOGIN_HANDLE,
    &LevitatePingPongEkain_B.AnalogInput, 3);

  /* End of MATLABSystem: '<Root>/Analog Input' */

  /* Gain: '<S4>/Gain1' */
  LevitatePingPongEkain_B.Gain1 = (uint32_T)LevitatePingPongEkain_P.Gain1_Gain *
    LevitatePingPongEkain_B.AnalogInput;

  /* Gain: '<S4>/Gain' incorporates:
   *  Constant: '<S4>/Invert'
   *  Sum: '<S4>/Sum'
   */
  LevitatePingPongEkain_B.Gain = (LevitatePingPongEkain_P.Invert_Value -
    (real32_T)LevitatePingPongEkain_B.Gain1 * 2.98023224E-8F) *
    LevitatePingPongEkain_P.Gain_Gain;

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<S2>/Desiratutako Altuera '
   */
  rtb_Sum_n = LevitatePingPongEkain_P.DesiratutakoAltuera_Value -
    LevitatePingPongEkain_B.Gain;

  /* DiscreteTransferFcn: '<S6>/Filter Differentiator TF' incorporates:
   *  Gain: '<S5>/Derivative Gain'
   */
  TmpSignalConversionAtFilterDiff = LevitatePingPongEkain_P.PIDDiskretua_D *
    rtb_Sum_n - TmpSignalConversionAtFilterDiff *
    LevitatePingPongEkain_DW.FilterDifferentiatorTF_states;

  /* DiscreteIntegrator: '<S5>/Integrator' incorporates:
   *  Gain: '<S5>/Integral Gain'
   */
  Integrator_tmp = LevitatePingPongEkain_P.Integrator_gainval *
    (LevitatePingPongEkain_P.PIDDiskretua_I * rtb_Sum_n);
  Integrator = Integrator_tmp + LevitatePingPongEkain_DW.Integrator_DSTATE;

  /* Sum: '<S5>/Sum' incorporates:
   *  DiscreteTransferFcn: '<S6>/Filter Differentiator TF'
   *  Gain: '<S5>/Proportional Gain'
   *  Gain: '<S6>/Filter Coefficient'
   *  Product: '<S6>/DenCoefOut'
   */
  LevitatePingPongEkain_B.Saturate =
    (LevitatePingPongEkain_P.FilterDifferentiatorTF_NumCoef[0] *
     TmpSignalConversionAtFilterDiff +
     LevitatePingPongEkain_P.FilterDifferentiatorTF_NumCoef[1L] *
     LevitatePingPongEkain_DW.FilterDifferentiatorTF_states) * rtb_Reciprocal *
    LevitatePingPongEkain_P.PIDDiskretua_N +
    (LevitatePingPongEkain_P.PIDDiskretua_P * rtb_Sum_n + Integrator);

  /* Saturate: '<S5>/Saturate' */
  if (LevitatePingPongEkain_B.Saturate >
      LevitatePingPongEkain_P.PIDDiskretua_UpperSaturationLim) {
    /* Sum: '<S5>/Sum' */
    LevitatePingPongEkain_B.Saturate =
      LevitatePingPongEkain_P.PIDDiskretua_UpperSaturationLim;
  } else {
    if (LevitatePingPongEkain_B.Saturate <
        LevitatePingPongEkain_P.PIDDiskretua_LowerSaturationLim) {
      /* Sum: '<S5>/Sum' */
      LevitatePingPongEkain_B.Saturate =
        LevitatePingPongEkain_P.PIDDiskretua_LowerSaturationLim;
    }
  }

  /* End of Saturate: '<S5>/Saturate' */

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S3>/Slider Gain'
   */
  if (LevitatePingPongEkain_P.ManualSwitch_CurrentSetting == 1) {
    LevitatePingPongEkain_B.ManualSwitch =
      LevitatePingPongEkain_P.SliderGain_gain *
      LevitatePingPongEkain_P.Constant_Value_f;
  } else {
    LevitatePingPongEkain_B.ManualSwitch = LevitatePingPongEkain_B.Saturate;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Start for MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle(LevitatePingPongEkain_DW.obj_g.MW_PWM_HANDLE, (real_T)
                      LevitatePingPongEkain_B.ManualSwitch);

  /* Update for DiscreteTransferFcn: '<S6>/Filter Differentiator TF' */
  LevitatePingPongEkain_DW.FilterDifferentiatorTF_states =
    TmpSignalConversionAtFilterDiff;

  /* Update for DiscreteIntegrator: '<S5>/Integrator' */
  LevitatePingPongEkain_DW.Integrator_DSTATE = Integrator_tmp + Integrator;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, LevitatePingPongEkain_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(LevitatePingPongEkain_M)!=-1) &&
        !((rtmGetTFinal(LevitatePingPongEkain_M)-
           LevitatePingPongEkain_M->Timing.taskTime0) >
          LevitatePingPongEkain_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(LevitatePingPongEkain_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LevitatePingPongEkain_M)) {
      rtmSetErrorStatus(LevitatePingPongEkain_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LevitatePingPongEkain_M->Timing.taskTime0 =
    (++LevitatePingPongEkain_M->Timing.clockTick0) *
    LevitatePingPongEkain_M->Timing.stepSize0;
}

/* Model initialize function */
void LevitatePingPongEkain_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)LevitatePingPongEkain_M, 0,
                sizeof(RT_MODEL_LevitatePingPongEkai_T));
  rtmSetTFinal(LevitatePingPongEkain_M, -1);
  LevitatePingPongEkain_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  LevitatePingPongEkain_M->Sizes.checksums[0] = (3133219606U);
  LevitatePingPongEkain_M->Sizes.checksums[1] = (837547132U);
  LevitatePingPongEkain_M->Sizes.checksums[2] = (1495188811U);
  LevitatePingPongEkain_M->Sizes.checksums[3] = (776694331U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    LevitatePingPongEkain_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(LevitatePingPongEkain_M->extModeInfo,
      &LevitatePingPongEkain_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LevitatePingPongEkain_M->extModeInfo,
                        LevitatePingPongEkain_M->Sizes.checksums);
    rteiSetTPtr(LevitatePingPongEkain_M->extModeInfo, rtmGetTPtr
                (LevitatePingPongEkain_M));
  }

  /* block I/O */
  (void) memset(((void *) &LevitatePingPongEkain_B), 0,
                sizeof(B_LevitatePingPongEkain_T));

  /* states (dwork) */
  (void) memset((void *)&LevitatePingPongEkain_DW, 0,
                sizeof(DW_LevitatePingPongEkain_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LevitatePingPongEkain_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 18;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_in_pf_T *obj;
    MW_AnalogIn_TriggerSource_Type trigger_val;
    codertarget_arduinobase_int_p_T *obj_0;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    LevitatePingPongEkain_DW.obj.matlabCodegenIsDeleted = true;
    obj = &LevitatePingPongEkain_DW.obj;
    LevitatePingPongEkain_DW.obj.isInitialized = 0L;
    obj->Hw.AvailablePwmPinNames.f1 = '2';
    obj->Hw.AvailablePwmPinNames.f2 = '3';
    obj->Hw.AvailablePwmPinNames.f3 = '4';
    obj->Hw.AvailablePwmPinNames.f4 = '5';
    obj->Hw.AvailablePwmPinNames.f5 = '6';
    obj->Hw.AvailablePwmPinNames.f6 = '7';
    obj->Hw.AvailablePwmPinNames.f7 = '8';
    obj->Hw.AvailablePwmPinNames.f8 = '9';
    obj->Hw.AvailablePwmPinNames.f9[0] = '1';
    obj->Hw.AvailablePwmPinNames.f9[1] = '0';
    obj->Hw.AvailablePwmPinNames.f10[0] = '1';
    obj->Hw.AvailablePwmPinNames.f10[1] = '1';
    obj->Hw.AvailablePwmPinNames.f11[0] = '1';
    obj->Hw.AvailablePwmPinNames.f11[1] = '2';
    obj->Hw.AvailablePwmPinNames.f12[0] = '1';
    obj->Hw.AvailablePwmPinNames.f12[1] = '3';
    LevitatePingPongEkain_DW.obj.matlabCodegenIsDeleted = false;
    LevitatePingPongEkain_DW.obj.SampleTime =
      LevitatePingPongEkain_P.AnalogInput_SampleTime;
    obj = &LevitatePingPongEkain_DW.obj;
    LevitatePingPongEkain_DW.obj.isSetupComplete = false;
    LevitatePingPongEkain_DW.obj.isInitialized = 1L;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(15UL);
    trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(LevitatePingPongEkain_DW.obj.MW_ANALOGIN_HANDLE,
      trigger_val, 0UL);
    LevitatePingPongEkain_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM' */
    LevitatePingPongEkain_DW.obj_g.matlabCodegenIsDeleted = true;
    arduino_PWMOutput_arduino_PWMOu(&LevitatePingPongEkain_DW.obj_g);
    obj_0 = &LevitatePingPongEkain_DW.obj_g;
    LevitatePingPongEkain_DW.obj_g.isSetupComplete = false;
    LevitatePingPongEkain_DW.obj_g.isInitialized = 1L;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(13UL, 0.0, 0.0);
    MW_PWM_Start(LevitatePingPongEkain_DW.obj_g.MW_PWM_HANDLE);
    LevitatePingPongEkain_DW.obj_g.isSetupComplete = true;

    /* InitializeConditions for DiscreteTransferFcn: '<S6>/Filter Differentiator TF' */
    LevitatePingPongEkain_DW.FilterDifferentiatorTF_states =
      LevitatePingPongEkain_P.FilterDifferentiatorTF_InitialS;

    /* InitializeConditions for DiscreteIntegrator: '<S5>/Integrator' */
    LevitatePingPongEkain_DW.Integrator_DSTATE =
      LevitatePingPongEkain_P.Integrator_IC;
  }
}

/* Model terminate function */
void LevitatePingPongEkain_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  matlabCodegenHandle_matlabCod_p(&LevitatePingPongEkain_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlabCodeg(&LevitatePingPongEkain_DW.obj_g);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
