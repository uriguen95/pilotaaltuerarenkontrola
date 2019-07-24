/*
 * LevitatePingPongEkain_dt.h
 *
 * Code generation for model "LevitatePingPongEkain".
 *
 * Model version              : 1.8
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Tue Jul  9 18:43:22 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(uint16_T),
  sizeof(uint32_T),
  sizeof(codertarget_arduinobase_in_pf_T),
  sizeof(codertarget_arduinobase_int_p_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "uint16_T",
  "uint32_T",
  "codertarget_arduinobase_in_pf_T",
  "codertarget_arduinobase_int_p_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&LevitatePingPongEkain_B.Gain1), 15, 0, 1 },

  { (char_T *)(&LevitatePingPongEkain_B.Gain), 1, 0, 3 },

  { (char_T *)(&LevitatePingPongEkain_B.AnalogInput), 5, 0, 1 }
  ,

  { (char_T *)(&LevitatePingPongEkain_DW.obj), 16, 0, 1 },

  { (char_T *)(&LevitatePingPongEkain_DW.obj_g), 17, 0, 1 },

  { (char_T *)(&LevitatePingPongEkain_DW.FilterDifferentiatorTF_states), 1, 0, 2
  }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  6U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&LevitatePingPongEkain_P.PIDDiskretua_D), 1, 0, 7 },

  { (char_T *)(&LevitatePingPongEkain_P.AnalogInput_SampleTime), 0, 0, 1 },

  { (char_T *)(&LevitatePingPongEkain_P.Constant_Value), 1, 0, 11 },

  { (char_T *)(&LevitatePingPongEkain_P.Gain1_Gain), 14, 0, 1 },

  { (char_T *)(&LevitatePingPongEkain_P.ManualSwitch_CurrentSetting), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] LevitatePingPongEkain_dt.h */
