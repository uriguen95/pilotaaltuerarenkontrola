/*
 * File: LevitatePingPongEkain.h
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

#ifndef RTW_HEADER_LevitatePingPongEkain_h_
#define RTW_HEADER_LevitatePingPongEkain_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef LevitatePingPongEkain_COMMON_INCLUDES_
# define LevitatePingPongEkain_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_PWM.h"
#include "MW_AnalogIn.h"
#endif                                 /* LevitatePingPongEkain_COMMON_INCLUDES_ */

#include "LevitatePingPongEkain_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  uint32_T Gain1;                      /* '<S4>/Gain1' */
  real32_T Gain;                       /* '<S4>/Gain' */
  real32_T Saturate;                   /* '<S5>/Saturate' */
  real32_T ManualSwitch;               /* '<Root>/Manual Switch' */
  uint16_T AnalogInput;                /* '<Root>/Analog Input' */
} B_LevitatePingPongEkain_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_in_pf_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_int_p_T obj_g;/* '<Root>/PWM' */
  real32_T FilterDifferentiatorTF_states;/* '<S6>/Filter Differentiator TF' */
  real32_T Integrator_DSTATE;          /* '<S5>/Integrator' */
} DW_LevitatePingPongEkain_T;

/* Parameters (default storage) */
struct P_LevitatePingPongEkain_T_ {
  real32_T PIDDiskretua_D;             /* Mask Parameter: PIDDiskretua_D
                                        * Referenced by: '<S5>/Derivative Gain'
                                        */
  real32_T PIDDiskretua_I;             /* Mask Parameter: PIDDiskretua_I
                                        * Referenced by: '<S5>/Integral Gain'
                                        */
  real32_T PIDDiskretua_LowerSaturationLim;/* Mask Parameter: PIDDiskretua_LowerSaturationLim
                                            * Referenced by: '<S5>/Saturate'
                                            */
  real32_T PIDDiskretua_N;             /* Mask Parameter: PIDDiskretua_N
                                        * Referenced by:
                                        *   '<S6>/N Copy'
                                        *   '<S6>/Filter Coefficient'
                                        */
  real32_T PIDDiskretua_P;             /* Mask Parameter: PIDDiskretua_P
                                        * Referenced by: '<S5>/Proportional Gain'
                                        */
  real32_T PIDDiskretua_UpperSaturationLim;/* Mask Parameter: PIDDiskretua_UpperSaturationLim
                                            * Referenced by: '<S5>/Saturate'
                                            */
  real32_T SliderGain_gain;            /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S3>/Slider Gain'
                                        */
  real_T AnalogInput_SampleTime;       /* Expression: 0.006
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S6>/Constant'
                                        */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S6>/TSamp'
                                        */
  real32_T DesiratutakoAltuera_Value;  /* Computed Parameter: DesiratutakoAltuera_Value
                                        * Referenced by: '<S2>/Desiratutako Altuera '
                                        */
  real32_T Invert_Value;               /* Computed Parameter: Invert_Value
                                        * Referenced by: '<S4>/Invert'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T FilterDifferentiatorTF_NumCoef[2];/* Computed Parameter: FilterDifferentiatorTF_NumCoef
                                              * Referenced by: '<S6>/Filter Differentiator TF'
                                              */
  real32_T FilterDifferentiatorTF_InitialS;/* Computed Parameter: FilterDifferentiatorTF_InitialS
                                            * Referenced by: '<S6>/Filter Differentiator TF'
                                            */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real32_T Integrator_IC;              /* Computed Parameter: Integrator_IC
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint16_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S4>/Gain1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LevitatePingPongEkain_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_LevitatePingPongEkain_T LevitatePingPongEkain_P;

/* Block signals (default storage) */
extern B_LevitatePingPongEkain_T LevitatePingPongEkain_B;

/* Block states (default storage) */
extern DW_LevitatePingPongEkain_T LevitatePingPongEkain_DW;

/* Model entry point functions */
extern void LevitatePingPongEkain_initialize(void);
extern void LevitatePingPongEkain_step(void);
extern void LevitatePingPongEkain_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LevitatePingPongEkai_T *const LevitatePingPongEkain_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LevitatePingPongEkain'
 * '<S1>'   : 'LevitatePingPongEkain/Manuala'
 * '<S2>'   : 'LevitatePingPongEkain/PID'
 * '<S3>'   : 'LevitatePingPongEkain/Manuala/Slider Gain'
 * '<S4>'   : 'LevitatePingPongEkain/PID/Oraingo Altuera '
 * '<S5>'   : 'LevitatePingPongEkain/PID/PID Diskretua'
 * '<S6>'   : 'LevitatePingPongEkain/PID/PID Diskretua/Filter Differentiator'
 */
#endif                                 /* RTW_HEADER_LevitatePingPongEkain_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
