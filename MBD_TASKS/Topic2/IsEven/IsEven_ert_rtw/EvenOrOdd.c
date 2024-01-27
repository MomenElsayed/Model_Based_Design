/*
 * File: EvenOrOdd.c
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

#include "EvenOrOdd.h"

/* Include model header file for global data */
#include "IsEven.h"
#include "IsEven_private.h"

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T u1_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Output and update for atomic system: '<Root>/EvenOrOdd' */
void IsEven_EvenOrOdd(real_T rtu_Inport, B_EvenOrOdd_IsEven_T *localB)
{
  real_T rtb_MathFunction;

  /* Math: '<S1>/Math Function' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_MathFunction = rt_remd_snf(rtu_Inport, 2.0);

  /* If: '<S1>/If' incorporates:
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   */
  if (rtb_MathFunction == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&localB->Merge[0], &IsEven_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    localB->Merge[255] = '\x00';
  } else if (rtb_MathFunction == 1.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&localB->Merge[0], &IsEven_ConstP.StringConstant_String_f[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    localB->Merge[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
