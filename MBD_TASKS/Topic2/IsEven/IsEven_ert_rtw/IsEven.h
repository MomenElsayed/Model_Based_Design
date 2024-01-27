/*
 * File: IsEven.h
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

#ifndef RTW_HEADER_IsEven_h_
#define RTW_HEADER_IsEven_h_
#include <string.h>
#include <stddef.h>
#ifndef IsEven_COMMON_INCLUDES_
#define IsEven_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IsEven_COMMON_INCLUDES_ */

#include "IsEven_types.h"

/* Child system includes */
#include "EvenOrOdd.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_EvenOrOdd_IsEven_T EvenOrOdd;      /* '<Root>/EvenOrOdd' */
} B_IsEven_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_f
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_f[256];
} ConstP_IsEven_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
} ExtU_IsEven_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Outport[256];                 /* '<Root>/Outport' */
} ExtY_IsEven_T;

/* Real-time Model Data Structure */
struct tag_RTM_IsEven_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_IsEven_T IsEven_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_IsEven_T IsEven_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_IsEven_T IsEven_Y;

/* Constant parameters (default storage) */
extern const ConstP_IsEven_T IsEven_ConstP;

/* Model entry point functions */
extern void IsEven_initialize(void);
extern void IsEven_step(void);
extern void IsEven_terminate(void);

/* Real-time Model object */
extern RT_MODEL_IsEven_T *const IsEven_M;

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
 * '<Root>' : 'IsEven'
 * '<S1>'   : 'IsEven/EvenOrOdd'
 * '<S2>'   : 'IsEven/EvenOrOdd/If Action Subsystem'
 * '<S3>'   : 'IsEven/EvenOrOdd/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_IsEven_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
