/*
 * File: LevitatePingPongEkain_types.h
 *
 * Code generated for Simulink model 'LevitatePingPongEkain'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Jul  9 18:43:22 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LevitatePingPongEkain_types_h_
#define RTW_HEADER_LevitatePingPongEkain_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef typedef_cell_LevitatePingPongEkain_T
#define typedef_cell_LevitatePingPongEkain_T

typedef struct {
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9[2];
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
} cell_LevitatePingPongEkain_T;

#endif                                 /*typedef_cell_LevitatePingPongEkain_T*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct {
  cell_LevitatePingPongEkain_T AvailablePwmPinNames;
} codertarget_arduinobase_inter_T;

#endif                                 /*typedef_codertarget_arduinobase_inter_T*/

#ifndef typedef_codertarget_arduinobase_int_p_T
#define typedef_codertarget_arduinobase_int_p_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  codertarget_arduinobase_inter_T Hw;
  MW_Handle_Type MW_PWM_HANDLE;
} codertarget_arduinobase_int_p_T;

#endif                                 /*typedef_codertarget_arduinobase_int_p_T*/

#ifndef typedef_codertarget_arduinobase_in_pf_T
#define typedef_codertarget_arduinobase_in_pf_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  codertarget_arduinobase_inter_T Hw;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
  real_T SampleTime;
} codertarget_arduinobase_in_pf_T;

#endif                                 /*typedef_codertarget_arduinobase_in_pf_T*/

/* Parameters (default storage) */
typedef struct P_LevitatePingPongEkain_T_ P_LevitatePingPongEkain_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LevitatePingPongEkain_T RT_MODEL_LevitatePingPongEkai_T;

#endif                                 /* RTW_HEADER_LevitatePingPongEkain_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
