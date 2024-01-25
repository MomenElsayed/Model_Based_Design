/*
 * File: Division.c
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

#include "Division.h"

/* Include model header file for global data */
#include "ScalerCalculator.h"
#include "ScalerCalculator_private.h"

/* Output and update for atomic system: '<Root>/Division' */
void ScalerCalculator_Division(void)
{
  real_T rtb_Compare_0;
  boolean_T rtb_Compare;

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Num2'
   */
  rtb_Compare = (ScalerCalculator_U.Num2 == 0.0);

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/Num2'
   */
  if (rtb_Compare) {
    rtb_Compare_0 = 1.0;
  } else {
    rtb_Compare_0 = ScalerCalculator_U.Num2;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Outport: '<Root>/Div_Result' incorporates:
   *  Inport: '<Root>/Num1'
   *  Product: '<S2>/Divide'
   */
  ScalerCalculator_Y.Div_Result = ScalerCalculator_U.Num1 / rtb_Compare_0;

  /* Switch: '<S2>/Switch1' incorporates:
   *  Outport: '<Root>/Error_Result'
   */
  if (rtb_Compare) {
    strncpy(&ScalerCalculator_Y.Error_Result[0],
            &ScalerCalculator_ConstB.StringConstant[0], 255U);
    ScalerCalculator_Y.Error_Result[255] = '\x00';
  } else {
    strncpy(&ScalerCalculator_Y.Error_Result[0],
            &ScalerCalculator_ConstB.StringConstant1[0], 255U);
    ScalerCalculator_Y.Error_Result[255] = '\x00';
  }

  /* End of Switch: '<S2>/Switch1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
