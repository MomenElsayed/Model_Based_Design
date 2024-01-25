/*
 * File: ScalerCalculator.h
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

#ifndef RTW_HEADER_ScalerCalculator_h_
#define RTW_HEADER_ScalerCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef ScalerCalculator_COMMON_INCLUDES_
#define ScalerCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalerCalculator_COMMON_INCLUDES_ */

#include "ScalerCalculator_types.h"

/* Child system includes */
#include "Addition.h"
#include "Division.h"
#include "Multiplication.h"
#include "Subtraction.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_Subtraction_ScalerCalculato_T Subtraction;/* '<Root>/Subtraction' */
  B_Multiplication_ScalerCalcul_T Multiplication;/* '<Root>/Multiplication' */
  B_Addition_ScalerCalculator_T Addition;/* '<Root>/Addition' */
} B_ScalerCalculator_T;

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S2>/String Constant' */
  const char_T StringConstant1[256];   /* '<S2>/String Constant1' */
} ConstB_ScalerCalculator_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
  real_T Num3;                         /* '<Root>/Num3' */
} ExtU_ScalerCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Add_Result;                   /* '<Root>/Add_Result' */
  real_T Sub_Result;                   /* '<Root>/Sub_Result' */
  real_T Mul_Result;                   /* '<Root>/Mul_Result' */
  real_T Div_Result;                   /* '<Root>/Div_Result' */
  char_T Error_Result[256];            /* '<Root>/Error_Result' */
  real_T UnaryResult;                  /* '<Root>/UnaryResult' */
  real_T IncResult;                    /* '<Root>/IncResult' */
  real_T DecResult;                    /* '<Root>/DecResult' */
} ExtY_ScalerCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_ScalerCalculator_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_ScalerCalculator_T ScalerCalculator_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_ScalerCalculator_T ScalerCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ScalerCalculator_T ScalerCalculator_Y;
extern const ConstB_ScalerCalculator_T ScalerCalculator_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void ScalerCalculator_initialize(void);
extern void ScalerCalculator_step(void);
extern void ScalerCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ScalerCalculator_T *const ScalerCalculator_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/FixPt Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'ScalerCalculator'
 * '<S1>'   : 'ScalerCalculator/Addition'
 * '<S2>'   : 'ScalerCalculator/Division'
 * '<S3>'   : 'ScalerCalculator/Multiplication'
 * '<S4>'   : 'ScalerCalculator/Others'
 * '<S5>'   : 'ScalerCalculator/Subtraction'
 * '<S6>'   : 'ScalerCalculator/Division/IsZero'
 * '<S7>'   : 'ScalerCalculator/Others/Decrement Real World'
 * '<S8>'   : 'ScalerCalculator/Others/Increment Real World'
 */
#endif                                 /* RTW_HEADER_ScalerCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
