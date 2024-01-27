/*
 * File: Factorial.h
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

#ifndef RTW_HEADER_Factorial_h_
#define RTW_HEADER_Factorial_h_
#ifndef FactorialWhile_COMMON_INCLUDES_
#define FactorialWhile_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialWhile_COMMON_INCLUDES_ */

#include "FactorialWhile_types.h"

/* Block signals for system '<Root>/Factorial' */
typedef struct {
  int32_T Product;                     /* '<S1>/Product' */
} B_Factorial_FactorialWhile_T;

/* Block states (default storage) for system '<Root>/Factorial' */
typedef struct {
  int32_T UnitDelay_DSTATE;            /* '<S1>/Unit Delay' */
} DW_Factorial_FactorialWhile_T;

extern void FactorialWhile_Factorial_Init(DW_Factorial_FactorialWhile_T *localDW);
extern void FactorialWhile_Factorial(int32_T rtu_Inport, real_T rtu_Inport1,
  B_Factorial_FactorialWhile_T *localB, DW_Factorial_FactorialWhile_T *localDW);

#endif                                 /* RTW_HEADER_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
