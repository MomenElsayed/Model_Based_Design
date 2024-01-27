/*
 * File: FactorialWhile.h
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

#ifndef RTW_HEADER_FactorialWhile_h_
#define RTW_HEADER_FactorialWhile_h_
#include <stddef.h>
#include <string.h>
#ifndef FactorialWhile_COMMON_INCLUDES_
#define FactorialWhile_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialWhile_COMMON_INCLUDES_ */

#include "FactorialWhile_types.h"

/* Child system includes */
#include "Factorial.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_Factorial_FactorialWhile_T Factorial;/* '<Root>/Factorial' */
} B_FactorialWhile_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_Factorial_FactorialWhile_T Factorial;/* '<Root>/Factorial' */
} DW_FactorialWhile_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T Inport;                      /* '<Root>/Inport' */
} ExtU_FactorialWhile_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Outport;                     /* '<Root>/Outport' */
} ExtY_FactorialWhile_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialWhile_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_FactorialWhile_T FactorialWhile_B;

/* Block states (default storage) */
extern DW_FactorialWhile_T FactorialWhile_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialWhile_T FactorialWhile_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialWhile_T FactorialWhile_Y;

/* Model entry point functions */
extern void FactorialWhile_initialize(void);
extern void FactorialWhile_step(void);
extern void FactorialWhile_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialWhile_T *const FactorialWhile_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'FactorialWhile'
 * '<S1>'   : 'FactorialWhile/Factorial'
 */
#endif                                 /* RTW_HEADER_FactorialWhile_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
