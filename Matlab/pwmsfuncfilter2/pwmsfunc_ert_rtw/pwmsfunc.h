/*
 * File: pwmsfunc.h
 *
 * Code generated for Simulink model 'pwmsfunc'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Jul 30 11:12:04 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_pwmsfunc_h_
#define RTW_HEADER_pwmsfunc_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef pwmsfunc_COMMON_INCLUDES_
# define pwmsfunc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_PWM.h"
#endif                                 /* pwmsfunc_COMMON_INCLUDES_ */

#include "pwmsfunc_types.h"

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
  real_T SFunctionBuilder;             /* '<Root>/S-Function Builder' */
  real_T Saturate;                     /* '<S1>/Saturate' */
} B_pwmsfunc_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_int_a_T obj; /* '<Root>/PWM' */
  real_T SFunctionBuilder_DSTATE;      /* '<Root>/S-Function Builder' */
  real_T FilterDifferentiatorTF_states;/* '<S2>/Filter Differentiator TF' */
  real_T Integrator_DSTATE;            /* '<S1>/Integrator' */
} DW_pwmsfunc_T;

/* Parameters (default storage) */
struct P_pwmsfunc_T_ {
  real_T PIDDiskretua1_D;              /* Mask Parameter: PIDDiskretua1_D
                                        * Referenced by: '<S1>/Derivative Gain'
                                        */
  real_T PIDDiskretua1_I;              /* Mask Parameter: PIDDiskretua1_I
                                        * Referenced by: '<S1>/Integral Gain'
                                        */
  real_T PIDDiskretua1_LowerSaturationLi;/* Mask Parameter: PIDDiskretua1_LowerSaturationLi
                                          * Referenced by: '<S1>/Saturate'
                                          */
  real_T PIDDiskretua1_N;              /* Mask Parameter: PIDDiskretua1_N
                                        * Referenced by:
                                        *   '<S2>/N Copy'
                                        *   '<S2>/Filter Coefficient'
                                        */
  real_T PIDDiskretua1_P;              /* Mask Parameter: PIDDiskretua1_P
                                        * Referenced by: '<S1>/Proportional Gain'
                                        */
  real_T PIDDiskretua1_UpperSaturationLi;/* Mask Parameter: PIDDiskretua1_UpperSaturationLi
                                          * Referenced by: '<S1>/Saturate'
                                          */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S2>/TSamp'
                                        */
  real_T DesiratutakoAltuera_Value;    /* Expression: 20
                                        * Referenced by: '<Root>/Desiratutako Altuera '
                                        */
  real_T FilterDifferentiatorTF_NumCoef[2];/* Expression: [1 -1]
                                            * Referenced by: '<S2>/Filter Differentiator TF'
                                            */
  real_T FilterDifferentiatorTF_InitialS;/* Expression: InitialConditionForFilter
                                          * Referenced by: '<S2>/Filter Differentiator TF'
                                          */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S1>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S1>/Integrator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pwmsfunc_T {
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
extern P_pwmsfunc_T pwmsfunc_P;

/* Block signals (default storage) */
extern B_pwmsfunc_T pwmsfunc_B;

/* Block states (default storage) */
extern DW_pwmsfunc_T pwmsfunc_DW;

/* Model entry point functions */
extern void pwmsfunc_initialize(void);
extern void pwmsfunc_step(void);
extern void pwmsfunc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_pwmsfunc_T *const pwmsfunc_M;

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
 * '<Root>' : 'pwmsfunc'
 * '<S1>'   : 'pwmsfunc/PID Diskretua1'
 * '<S2>'   : 'pwmsfunc/PID Diskretua1/Filter Differentiator'
 */
#endif                                 /* RTW_HEADER_pwmsfunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
