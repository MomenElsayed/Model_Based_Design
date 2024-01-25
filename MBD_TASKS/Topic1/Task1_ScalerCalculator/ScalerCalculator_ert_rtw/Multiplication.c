/*
 * File: Multiplication.c
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

#include "Multiplication.h"

/* Include model header file for global data */
#include "ScalerCalculator.h"
#include "ScalerCalculator_private.h"

/* Output and update for atomic system: '<Root>/Multiplication' */
void ScalerCalculator_Multiplication(real_T rtu_Num1, real_T rtu_Num2,
  B_Multiplication_ScalerCalcul_T *localB)
{
  /* Product: '<S3>/Product' */
  localB->Product = rtu_Num1 * rtu_Num2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
