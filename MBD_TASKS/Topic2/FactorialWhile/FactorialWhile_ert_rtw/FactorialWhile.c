/*
 * File: FactorialWhile.c
 *
 * Code generated for Simulink model 'FactorialWhile'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 15:05:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialWhile.h"
#include "FactorialWhile_private.h"

/* Block signals (default storage) */
B_FactorialWhile_T FactorialWhile_B;

/* Block states (default storage) */
DW_FactorialWhile_T FactorialWhile_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FactorialWhile_T FactorialWhile_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialWhile_T FactorialWhile_Y;

/* Real-time model */
static RT_MODEL_FactorialWhile_T FactorialWhile_M_;
RT_MODEL_FactorialWhile_T *const FactorialWhile_M = &FactorialWhile_M_;

/* Model step function */
void FactorialWhile_step(void)
{
  /* Outputs for Iterator SubSystem: '<Root>/Factorial' */

  /* Inport: '<Root>/Inport' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  FactorialWhile_Factorial(FactorialWhile_U.Inport, 1.0,
    &FactorialWhile_B.Factorial, &FactorialWhile_DW.Factorial);

  /* End of Outputs for SubSystem: '<Root>/Factorial' */

  /* Outport: '<Root>/Outport' */
  FactorialWhile_Y.Outport = FactorialWhile_B.Factorial.Product;
}

/* Model initialize function */
void FactorialWhile_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialWhile_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &FactorialWhile_B), 0,
                sizeof(B_FactorialWhile_T));

  /* states (dwork) */
  (void) memset((void *)&FactorialWhile_DW, 0,
                sizeof(DW_FactorialWhile_T));

  /* external inputs */
  FactorialWhile_U.Inport = 0;

  /* external outputs */
  FactorialWhile_Y.Outport = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/Factorial' */
  FactorialWhile_Factorial_Init(&FactorialWhile_DW.Factorial);

  /* End of SystemInitialize for SubSystem: '<Root>/Factorial' */
}

/* Model terminate function */
void FactorialWhile_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
