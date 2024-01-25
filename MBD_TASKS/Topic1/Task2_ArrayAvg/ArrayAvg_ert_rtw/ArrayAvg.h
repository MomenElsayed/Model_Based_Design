/*
 * File: ArrayAvg.h
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

#ifndef RTW_HEADER_ArrayAvg_h_
#define RTW_HEADER_ArrayAvg_h_
#include <string.h>
#include <stddef.h>
#ifndef ArrayAvg_COMMON_INCLUDES_
#define ArrayAvg_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ArrayAvg_COMMON_INCLUDES_ */

#include "ArrayAvg_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1[10];                      /* '<Root>/In1' */
} ExtU_ArrayAvg_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T MaxOfArr;                     /* '<Root>/MaxOfArr' */
  real_T MinOfArr;                     /* '<Root>/MinOfArr' */
  real_T SumOfArr;                     /* '<Root>/SumOfArr' */
  real_T AvgOfArr;                     /* '<Root>/AvgOfArr' */
} ExtY_ArrayAvg_T;

/* Real-time Model Data Structure */
struct tag_RTM_ArrayAvg_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ArrayAvg_T ArrayAvg_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ArrayAvg_T ArrayAvg_Y;

/* Model entry point functions */
extern void ArrayAvg_initialize(void);
extern void ArrayAvg_step(void);
extern void ArrayAvg_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ArrayAvg_T *const ArrayAvg_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ArrayAvg'
 * '<S1>'   : 'ArrayAvg/Array_Size'
 */
#endif                                 /* RTW_HEADER_ArrayAvg_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
