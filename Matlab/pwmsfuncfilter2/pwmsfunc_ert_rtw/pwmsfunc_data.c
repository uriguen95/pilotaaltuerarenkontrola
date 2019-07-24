/*
 * File: pwmsfunc_data.c
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

/* Block parameters (default storage) */
P_pwmsfunc_T pwmsfunc_P = {
  /* Mask Parameter: PIDDiskretua1_D
   * Referenced by: '<S1>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDDiskretua1_I
   * Referenced by: '<S1>/Integral Gain'
   */
  -0.2,

  /* Mask Parameter: PIDDiskretua1_LowerSaturationLi
   * Referenced by: '<S1>/Saturate'
   */
  0.0,

  /* Mask Parameter: PIDDiskretua1_N
   * Referenced by:
   *   '<S2>/N Copy'
   *   '<S2>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDDiskretua1_P
   * Referenced by: '<S1>/Proportional Gain'
   */
  -2.022215249348,

  /* Mask Parameter: PIDDiskretua1_UpperSaturationLi
   * Referenced by: '<S1>/Saturate'
   */
  255.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant'
   */
  1.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S2>/TSamp'
   */
  0.05,

  /* Expression: 15
   * Referenced by: '<Root>/Desiratutako Altuera '
   */
  15.0,

  /* Expression: [1 -1]
   * Referenced by: '<S2>/Filter Differentiator TF'
   */
  { 1.0, -1.0 },

  /* Expression: InitialConditionForFilter
   * Referenced by: '<S2>/Filter Differentiator TF'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S1>/Integrator'
   */
  0.05,

  /* Expression: InitialConditionForIntegrator
   * Referenced by: '<S1>/Integrator'
   */
  0.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
