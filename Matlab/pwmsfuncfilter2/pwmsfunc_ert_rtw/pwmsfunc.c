/*
 * File: pwmsfunc.c
 *
 * Code generated for Simulink model 'pwmsfunc'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Jul 19 23:45:00 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pwmsfunc.h"
#include "pwmsfunc_private.h"

/* Block signals (default storage) */
B_pwmsfunc_T pwmsfunc_B;

/* Block states (default storage) */
DW_pwmsfunc_T pwmsfunc_DW;

/* Real-time model */
RT_MODEL_pwmsfunc_T pwmsfunc_M_;
RT_MODEL_pwmsfunc_T *const pwmsfunc_M = &pwmsfunc_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_int_a_T *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_a_T *obj);
static codertarget_arduinobase_int_a_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_a_T *obj);
static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_int_a_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/PWM' */
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_a_T *obj)
{
  /* Start for MATLABSystem: '<Root>/PWM' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }

  /* End of Start for MATLABSystem: '<Root>/PWM' */
}

static codertarget_arduinobase_int_a_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_a_T *obj)
{
  codertarget_arduinobase_int_a_T *b_obj;

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
void pwmsfunc_step(void)
{
  real_T rtb_Sum;
  real_T rtb_Reciprocal;
  real_T Integrator;
  real_T TmpSignalConversionAtFilterDiff;
  real_T Integrator_tmp;

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  Constant: '<S2>/N Copy'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = ( w * Ts )
   */
  rtb_Sum = pwmsfunc_P.PIDDiskretua1_N * pwmsfunc_P.TSamp_WtEt;

  /* Math: '<S2>/Reciprocal' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/SumDen'
   *
   * About '<S2>/Reciprocal':
   *  Operator: reciprocal
   */
  rtb_Reciprocal = 1.0 / (pwmsfunc_P.Constant_Value + rtb_Sum);

  /* SignalConversion: '<S2>/TmpSignal ConversionAtFilter Differentiator TFInport2' incorporates:
   *  Constant: '<S2>/Constant'
   *  Product: '<S2>/Divide'
   *  Sum: '<S2>/SumNum'
   */
  TmpSignalConversionAtFilterDiff = (rtb_Sum - pwmsfunc_P.Constant_Value) *
    rtb_Reciprocal;

  /* S-Function (bloque1): '<Root>/S-Function Builder' */
  bloque1_Outputs_wrapper(&pwmsfunc_B.SFunctionBuilder,
    &pwmsfunc_DW.SFunctionBuilder_DSTATE);

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Desiratutako Altuera '
   */
  rtb_Sum = pwmsfunc_P.DesiratutakoAltuera_Value - pwmsfunc_B.SFunctionBuilder;

  /* DiscreteTransferFcn: '<S2>/Filter Differentiator TF' incorporates:
   *  Gain: '<S1>/Derivative Gain'
   */
  TmpSignalConversionAtFilterDiff = pwmsfunc_P.PIDDiskretua1_D * rtb_Sum -
    TmpSignalConversionAtFilterDiff * pwmsfunc_DW.FilterDifferentiatorTF_states;

  /* DiscreteIntegrator: '<S1>/Integrator' incorporates:
   *  Gain: '<S1>/Integral Gain'
   */
  Integrator_tmp = pwmsfunc_P.Integrator_gainval * (pwmsfunc_P.PIDDiskretua1_I *
    rtb_Sum);
  Integrator = Integrator_tmp + pwmsfunc_DW.Integrator_DSTATE;

  /* Sum: '<S1>/Sum' incorporates:
   *  DiscreteTransferFcn: '<S2>/Filter Differentiator TF'
   *  Gain: '<S1>/Proportional Gain'
   *  Gain: '<S2>/Filter Coefficient'
   *  Product: '<S2>/DenCoefOut'
   */
  rtb_Sum = (pwmsfunc_P.FilterDifferentiatorTF_NumCoef[0] *
             TmpSignalConversionAtFilterDiff +
             pwmsfunc_P.FilterDifferentiatorTF_NumCoef[1L] *
             pwmsfunc_DW.FilterDifferentiatorTF_states) * rtb_Reciprocal *
    pwmsfunc_P.PIDDiskretua1_N + (pwmsfunc_P.PIDDiskretua1_P * rtb_Sum +
    Integrator);

  /* Saturate: '<S1>/Saturate' */
  if (rtb_Sum > pwmsfunc_P.PIDDiskretua1_UpperSaturationLi) {
    rtb_Sum = pwmsfunc_P.PIDDiskretua1_UpperSaturationLi;
  } else {
    if (rtb_Sum < pwmsfunc_P.PIDDiskretua1_LowerSaturationLi) {
      rtb_Sum = pwmsfunc_P.PIDDiskretua1_LowerSaturationLi;
    }
  }

  /* End of Saturate: '<S1>/Saturate' */

  /* Start for MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle(pwmsfunc_DW.obj.MW_PWM_HANDLE, rtb_Sum);

  /* Update for S-Function (bloque1): '<Root>/S-Function Builder' */

  /* S-Function "bloque1_wrapper" Block: <Root>/S-Function Builder */
  bloque1_Update_wrapper(&pwmsfunc_B.SFunctionBuilder,
    &pwmsfunc_DW.SFunctionBuilder_DSTATE);

  /* Update for DiscreteTransferFcn: '<S2>/Filter Differentiator TF' */
  pwmsfunc_DW.FilterDifferentiatorTF_states = TmpSignalConversionAtFilterDiff;

  /* Update for DiscreteIntegrator: '<S1>/Integrator' */
  pwmsfunc_DW.Integrator_DSTATE = Integrator_tmp + Integrator;
}

/* Model initialize function */
void pwmsfunc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(pwmsfunc_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &pwmsfunc_B), 0,
                sizeof(B_pwmsfunc_T));

  /* states (dwork) */
  (void) memset((void *)&pwmsfunc_DW, 0,
                sizeof(DW_pwmsfunc_T));

  {
    codertarget_arduinobase_int_a_T *obj;

    /* Start for MATLABSystem: '<Root>/PWM' */
    pwmsfunc_DW.obj.matlabCodegenIsDeleted = true;
    arduino_PWMOutput_arduino_PWMOu(&pwmsfunc_DW.obj);
    obj = &pwmsfunc_DW.obj;
    pwmsfunc_DW.obj.isSetupComplete = false;
    pwmsfunc_DW.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(13UL, 0.0, 0.0);
    MW_PWM_Start(pwmsfunc_DW.obj.MW_PWM_HANDLE);
    pwmsfunc_DW.obj.isSetupComplete = true;

    /* InitializeConditions for S-Function (bloque1): '<Root>/S-Function Builder' */

    /* S-Function Block: <Root>/S-Function Builder */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          pwmsfunc_DW.SFunctionBuilder_DSTATE = initVector[0];
        }
      }
    }

    /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filter Differentiator TF' */
    pwmsfunc_DW.FilterDifferentiatorTF_states =
      pwmsfunc_P.FilterDifferentiatorTF_InitialS;

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Integrator' */
    pwmsfunc_DW.Integrator_DSTATE = pwmsfunc_P.Integrator_IC;
  }
}

/* Model terminate function */
void pwmsfunc_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlabCodeg(&pwmsfunc_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
