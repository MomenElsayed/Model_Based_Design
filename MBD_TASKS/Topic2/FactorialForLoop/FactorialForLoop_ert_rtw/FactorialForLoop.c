/*
 * File: FactorialForLoop.c
 *
 * Code generated for Simulink model 'FactorialForLoop'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 14:48:41 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialForLoop.h"
#include "FactorialForLoop_private.h"

/* Block signals (default storage) */
B_FactorialForLoop_T FactorialForLoop_B;

/* Block states (default storage) */
DW_FactorialForLoop_T FactorialForLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FactorialForLoop_T FactorialForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialForLoop_T FactorialForLoop_Y;

/* Real-time model */
static RT_MODEL_FactorialForLoop_T FactorialForLoop_M_;
RT_MODEL_FactorialForLoop_T *const FactorialForLoop_M = &FactorialForLoop_M_;

/* Model step function */
void FactorialForLoop_step(void)
{
  /* Outputs for Iterator SubSystem: '<Root>/Factorial' */

  /* Inport: '<Root>/Inport' */
  FactorialForLoop_Factorial(FactorialForLoop_U.Inport,
    &FactorialForLoop_B.Factorial, &FactorialForLoop_DW.Factorial);

  /* End of Outputs for SubSystem: '<Root>/Factorial' */

  /* Outport: '<Root>/Outport' */
  FactorialForLoop_Y.Outport = FactorialForLoop_B.Factorial.Product;
}

/* Model initialize function */
void FactorialForLoop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialForLoop_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &FactorialForLoop_B), 0,
                sizeof(B_FactorialForLoop_T));

  /* states (dwork) */
  (void) memset((void *)&FactorialForLoop_DW, 0,
                sizeof(DW_FactorialForLoop_T));

  /* external inputs */
  FactorialForLoop_U.Inport = 0;

  /* external outputs */
  FactorialForLoop_Y.Outport = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/Factorial' */
  FactorialForLoop_Factorial_Init(&FactorialForLoop_DW.Factorial);

  /* End of SystemInitialize for SubSystem: '<Root>/Factorial' */
}

/* Model terminate function */
void FactorialForLoop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
