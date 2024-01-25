/*
 * File: Addition.c
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

#include "Addition.h"

/* Include model header file for global data */
#include "ScalerCalculator.h"
#include "ScalerCalculator_private.h"

/* Output and update for atomic system: '<Root>/Addition' */
void ScalerCalculator_Addition(real_T rtu_Num1, real_T rtu_Num2,
  B_Addition_ScalerCalculator_T *localB)
{
  /* Sum: '<S1>/Add' */
  localB->Add = rtu_Num1 + rtu_Num2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
