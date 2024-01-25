/*
 * File: ArrayAvg.c
 *
 * Code generated for Simulink model 'ArrayAvg'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 20:23:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ArrayAvg.h"
#include "ArrayAvg_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ArrayAvg_T ArrayAvg_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ArrayAvg_T ArrayAvg_Y;

/* Real-time model */
static RT_MODEL_ArrayAvg_T ArrayAvg_M_;
RT_MODEL_ArrayAvg_T *const ArrayAvg_M = &ArrayAvg_M_;

/* Model step function */
void ArrayAvg_step(void)
{
  real_T rtb_SumofElements;
  real_T u1;
  int32_T i;

  /* MinMax: '<Root>/Max of Elements' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtb_SumofElements = ArrayAvg_U.In1[0];
  for (i = 0; i < 9; i++) {
    u1 = ArrayAvg_U.In1[i + 1];
    if ((!(rtb_SumofElements > u1)) && (!rtIsNaN(u1))) {
      rtb_SumofElements = u1;
    }
  }

  /* Outport: '<Root>/MaxOfArr' incorporates:
   *  MinMax: '<Root>/Max of Elements'
   */
  ArrayAvg_Y.MaxOfArr = rtb_SumofElements;

  /* MinMax: '<Root>/Min of Elements' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtb_SumofElements = ArrayAvg_U.In1[0];
  for (i = 0; i < 9; i++) {
    u1 = ArrayAvg_U.In1[i + 1];
    if ((!(rtb_SumofElements < u1)) && (!rtIsNaN(u1))) {
      rtb_SumofElements = u1;
    }
  }

  /* Outport: '<Root>/MinOfArr' incorporates:
   *  MinMax: '<Root>/Min of Elements'
   */
  ArrayAvg_Y.MinOfArr = rtb_SumofElements;

  /* Sum: '<Root>/Sum of Elements' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtb_SumofElements = -0.0;
  for (i = 0; i < 10; i++) {
    rtb_SumofElements += ArrayAvg_U.In1[i];
  }

  /* End of Sum: '<Root>/Sum of Elements' */

  /* Outport: '<Root>/SumOfArr' */
  ArrayAvg_Y.SumOfArr = rtb_SumofElements;

  /* Outport: '<Root>/AvgOfArr' incorporates:
   *  MATLAB Function: '<Root>/Array_Size'
   *  Product: '<Root>/Divide'
   */
  /* MATLAB Function 'Array_Size': '<S1>:1' */
  /* '<S1>:1:2' NoOfEle = length(Arr); */
  ArrayAvg_Y.AvgOfArr = rtb_SumofElements / 10.0;
}

/* Model initialize function */
void ArrayAvg_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ArrayAvg_M, (NULL));

  /* external inputs */
  (void)memset(&ArrayAvg_U, 0, sizeof(ExtU_ArrayAvg_T));

  /* external outputs */
  (void) memset((void *)&ArrayAvg_Y, 0,
                sizeof(ExtY_ArrayAvg_T));
}

/* Model terminate function */
void ArrayAvg_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
