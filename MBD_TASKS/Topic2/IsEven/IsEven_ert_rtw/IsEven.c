/*
 * File: IsEven.c
 *
 * Code generated for Simulink model 'IsEven'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 10:25:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IsEven.h"
#include "IsEven_private.h"

/* Block signals (default storage) */
B_IsEven_T IsEven_B;

/* External inputs (root inport signals with default storage) */
ExtU_IsEven_T IsEven_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_IsEven_T IsEven_Y;

/* Real-time model */
static RT_MODEL_IsEven_T IsEven_M_;
RT_MODEL_IsEven_T *const IsEven_M = &IsEven_M_;

/* Model step function */
void IsEven_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/EvenOrOdd' */

  /* Inport: '<Root>/Inport' */
  IsEven_EvenOrOdd(IsEven_U.Inport, &IsEven_B.EvenOrOdd);

  /* End of Outputs for SubSystem: '<Root>/EvenOrOdd' */

  /* Outport: '<Root>/Outport' */
  strncpy(&IsEven_Y.Outport[0], &IsEven_B.EvenOrOdd.Merge[0], 255U);
  IsEven_Y.Outport[255] = '\x00';
}

/* Model initialize function */
void IsEven_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(IsEven_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &IsEven_B), 0,
                sizeof(B_IsEven_T));

  /* external inputs */
  IsEven_U.Inport = 0.0;

  /* external outputs */
  (void) memset(&IsEven_Y.Outport[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void IsEven_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
