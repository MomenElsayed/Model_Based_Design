/*
 * File: Subtraction.h
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

#ifndef RTW_HEADER_Subtraction_h_
#define RTW_HEADER_Subtraction_h_
#ifndef ScalerCalculator_COMMON_INCLUDES_
#define ScalerCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalerCalculator_COMMON_INCLUDES_ */

#include "ScalerCalculator_types.h"

/* Block signals for system '<Root>/Subtraction' */
typedef struct {
  real_T Subtract;                     /* '<S5>/Subtract' */
} B_Subtraction_ScalerCalculato_T;

extern void ScalerCalculator_Subtraction(real_T rtu_Num1, real_T rtu_Num2,
  B_Subtraction_ScalerCalculato_T *localB);

#endif                                 /* RTW_HEADER_Subtraction_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
