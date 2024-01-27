/*
 * File: Factorial.h
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

#ifndef RTW_HEADER_Factorial_h_
#define RTW_HEADER_Factorial_h_
#ifndef FactorialForLoop_COMMON_INCLUDES_
#define FactorialForLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialForLoop_COMMON_INCLUDES_ */

#include "FactorialForLoop_types.h"

/* Block signals for system '<Root>/Factorial' */
typedef struct {
  int32_T Product;                     /* '<S1>/Product' */
} B_Factorial_FactorialForLoop_T;

/* Block states (default storage) for system '<Root>/Factorial' */
typedef struct {
  int32_T UnitDelay_DSTATE;            /* '<S1>/Unit Delay' */
} DW_Factorial_FactorialForLoop_T;

extern void FactorialForLoop_Factorial_Init(DW_Factorial_FactorialForLoop_T
  *localDW);
extern void FactorialForLoop_Factorial(int32_T rtu_Inport,
  B_Factorial_FactorialForLoop_T *localB, DW_Factorial_FactorialForLoop_T
  *localDW);

#endif                                 /* RTW_HEADER_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
