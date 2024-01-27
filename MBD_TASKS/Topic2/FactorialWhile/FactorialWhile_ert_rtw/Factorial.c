/*
 * File: Factorial.c
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

#include "Factorial.h"

/* Include model header file for global data */
#include "FactorialWhile.h"
#include "FactorialWhile_private.h"

/* System initialize for iterator system: '<Root>/Factorial' */
void FactorialWhile_Factorial_Init(DW_Factorial_FactorialWhile_T *localDW)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = 1;
}

/* Output and update for iterator system: '<Root>/Factorial' */
void FactorialWhile_Factorial(int32_T rtu_Inport, real_T rtu_Inport1,
  B_Factorial_FactorialWhile_T *localB, DW_Factorial_FactorialWhile_T *localDW)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/Factorial' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;
  loopCond = (rtu_Inport1 != 0.0);
  while (loopCond && (s1_iter <= 15)) {
    /* Product: '<S1>/Product' incorporates:
     *  UnitDelay: '<S1>/Unit Delay'
     */
    localB->Product = s1_iter * localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    localDW->UnitDelay_DSTATE = localB->Product;

    /* RelationalOperator: '<S1>/GreaterThan' */
    loopCond = (s1_iter < rtu_Inport);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/Factorial' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
