/*
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  pwmsfunc_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 0.1;
  float systemClock = 0;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(pwmsfunc_M, 0);
  pwmsfunc_initialize();
  configureArduinoAVRTimer();
  runModel =
    rtmGetErrorStatus(pwmsfunc_M) == (NULL);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(pwmsfunc_M) == (NULL));
    runModel = !(stopRequested);
    runModel = runModel && MW_Arduino_Loop();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  pwmsfunc_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
