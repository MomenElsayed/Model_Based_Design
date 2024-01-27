/*
 * File: EvenOrOdd.h
 *
 * Code generated for Simulink model 'IsEven'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 10:25:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EvenOrOdd_h_
#define RTW_HEADER_EvenOrOdd_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef IsEven_COMMON_INCLUDES_
#define IsEven_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IsEven_COMMON_INCLUDES_ */

#include "IsEven_types.h"
#include "rt_nonfinite.h"

/* Block signals for system '<Root>/EvenOrOdd' */
typedef struct {
  char_T Merge[256];                   /* '<S1>/Merge' */
} B_EvenOrOdd_IsEven_T;

extern void IsEven_EvenOrOdd(real_T rtu_Inport, B_EvenOrOdd_IsEven_T *localB);

#endif                                 /* RTW_HEADER_EvenOrOdd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
