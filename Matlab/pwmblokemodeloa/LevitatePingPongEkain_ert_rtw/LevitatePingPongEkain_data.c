/*
 * File: LevitatePingPongEkain_data.c
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

/* Block parameters (default storage) */
P_LevitatePingPongEkain_T LevitatePingPongEkain_P = {
  /* Mask Parameter: PIDDiskretua_D
   * Referenced by: '<S5>/Derivative Gain'
   */
  -1.75707293F,

  /* Mask Parameter: PIDDiskretua_I
   * Referenced by: '<S5>/Integral Gain'
   */
  -0.936942279F,

  /* Mask Parameter: PIDDiskretua_LowerSaturationLim
   * Referenced by: '<S5>/Saturate'
   */
  107.0F,

  /* Mask Parameter: PIDDiskretua_N
   * Referenced by:
   *   '<S6>/N Copy'
   *   '<S6>/Filter Coefficient'
   */
  100.0F,

  /* Mask Parameter: PIDDiskretua_P
   * Referenced by: '<S5>/Proportional Gain'
   */
  -11.5508022F,

  /* Mask Parameter: PIDDiskretua_UpperSaturationLim
   * Referenced by: '<S5>/Saturate'
   */
  152.0F,

  /* Mask Parameter: SliderGain_gain
   * Referenced by: '<S3>/Slider Gain'
   */
  237.197601F,

  /* Expression: 0.1
   * Referenced by: '<Root>/Analog Input'
   */
  0.1,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S6>/Constant'
   */
  1.0F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S6>/TSamp'
   */
  0.05F,

  /* Computed Parameter: DesiratutakoAltuera_Value
   * Referenced by: '<S2>/Desiratutako Altuera '
   */
  27.0F,

  /* Computed Parameter: Invert_Value
   * Referenced by: '<S4>/Invert'
   */
  1.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S4>/Gain'
   */
  30.0F,

  /* Computed Parameter: FilterDifferentiatorTF_NumCoef
   * Referenced by: '<S6>/Filter Differentiator TF'
   */
  { 1.0F, -1.0F },

  /* Computed Parameter: FilterDifferentiatorTF_InitialS
   * Referenced by: '<S6>/Filter Differentiator TF'
   */
  0.0F,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S5>/Integrator'
   */
  0.05F,

  /* Computed Parameter: Integrator_IC
   * Referenced by: '<S5>/Integrator'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S1>/Constant'
   */
  1.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S4>/Gain1'
   */
  32768U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
