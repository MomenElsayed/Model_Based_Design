/*
 * File: ScalerCalculator.c
 *
 * Code generated for Simulink model 'ScalerCalculator'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 20:45:52 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ScalerCalculator.h"
#include "ScalerCalculator_private.h"

/* Block signals (default storage) */
B_ScalerCalculator_T ScalerCalculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_ScalerCalculator_T ScalerCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ScalerCalculator_T ScalerCalculator_Y;

/* Real-time model */
static RT_MODEL_ScalerCalculator_T ScalerCalculator_M_;
RT_MODEL_ScalerCalculator_T *const ScalerCalculator_M = &ScalerCalculator_M_;

/* Model step function */
void ScalerCalculator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Addition' */

  /* Inport: '<Root>/Num1' incorporates:
   *  Inport: '<Root>/Num2'
   */
  ScalerCalculator_Addition(ScalerCalculator_U.Num1, ScalerCalculator_U.Num2,
    &ScalerCalculator_B.Addition);

  /* End of Outputs for SubSystem: '<Root>/Addition' */

  /* Outport: '<Root>/Add_Result' */
  ScalerCalculator_Y.Add_Result = ScalerCalculator_B.Addition.Add;

  /* Outputs for Atomic SubSystem: '<Root>/Subtraction' */

  /* Inport: '<Root>/Num1' incorporates:
   *  Inport: '<Root>/Num2'
   */
  ScalerCalculator_Subtraction(ScalerCalculator_U.Num1, ScalerCalculator_U.Num2,
    &ScalerCalculator_B.Subtraction);

  /* End of Outputs for SubSystem: '<Root>/Subtraction' */

  /* Outport: '<Root>/Sub_Result' */
  ScalerCalculator_Y.Sub_Result = ScalerCalculator_B.Subtraction.Subtract;

  /* Outputs for Atomic SubSystem: '<Root>/Multiplication' */

  /* Inport: '<Root>/Num1' incorporates:
   *  Inport: '<Root>/Num2'
   */
  ScalerCalculator_Multiplication(ScalerCalculator_U.Num1,
    ScalerCalculator_U.Num2, &ScalerCalculator_B.Multiplication);

  /* End of Outputs for SubSystem: '<Root>/Multiplication' */

  /* Outport: '<Root>/Mul_Result' */
  ScalerCalculator_Y.Mul_Result = ScalerCalculator_B.Multiplication.Product;

  /* Outputs for Atomic SubSystem: '<Root>/Division' */
  ScalerCalculator_Division();

  /* End of Outputs for SubSystem: '<Root>/Division' */

  /* Outport: '<Root>/UnaryResult' incorporates:
   *  Inport: '<Root>/Num3'
   *  UnaryMinus: '<S4>/Unary Minus'
   */
  ScalerCalculator_Y.UnaryResult = -ScalerCalculator_U.Num3;

  /* Outport: '<Root>/IncResult' incorporates:
   *  Constant: '<S8>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S8>/FixPt Sum1'
   */
  ScalerCalculator_Y.IncResult = ScalerCalculator_U.Num3 + 1.0;

  /* Outport: '<Root>/DecResult' incorporates:
   *  Constant: '<S7>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S7>/FixPt Sum1'
   */
  ScalerCalculator_Y.DecResult = ScalerCalculator_U.Num3 - 1.0;
}

/* Model initialize function */
void ScalerCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ScalerCalculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ScalerCalculator_B), 0,
                sizeof(B_ScalerCalculator_T));

  /* external inputs */
  (void)memset(&ScalerCalculator_U, 0, sizeof(ExtU_ScalerCalculator_T));

  /* external outputs */
  (void) memset((void *)&ScalerCalculator_Y, 0,
                sizeof(ExtY_ScalerCalculator_T));
}

/* Model terminate function */
void ScalerCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
