/*
 * File: Factorial.c
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

#include "Factorial.h"

/* Include model header file for global data */
#include "FactorialForLoop.h"
#include "FactorialForLoop_private.h"

/* System initialize for iterator system: '<Root>/Factorial' */
void FactorialForLoop_Factorial_Init(DW_Factorial_FactorialForLoop_T *localDW)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = 1;
}

/* Output and update for iterator system: '<Root>/Factorial' */
void FactorialForLoop_Factorial(int32_T rtu_Inport,
  B_Factorial_FactorialForLoop_T *localB, DW_Factorial_FactorialForLoop_T
  *localDW)
{
  int32_T s1_iter;
  int32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/Factorial' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  tmp = rtu_Inport;
  if (rtu_Inport > 2147483646) {
    tmp = 2147483646;
  } else if (rtu_Inport < 0) {
    tmp = 0;
  }

  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Product: '<S1>/Product' incorporates:
     *  UnitDelay: '<S1>/Unit Delay'
     */
    localB->Product = s1_iter * localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    localDW->UnitDelay_DSTATE = localB->Product;
  }

  /* End of Outputs for SubSystem: '<Root>/Factorial' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
