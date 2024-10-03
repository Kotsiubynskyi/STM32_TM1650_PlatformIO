/**
 ******************************************************************************
 * @file    stm32g0xx_it.c
 * @brief   Interrupt Service Routines.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "main.h"
#include "stm32g0xx_it.h"

/******************************************************************************/
/*           Cortex-M0+ Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
 * @brief This function handles Non maskable interrupt.
 */
void NMI_Handler(void)
{
  while (1)
  {
  }
}

/**
 * @brief This function handles Hard fault interrupt.
 */
void HardFault_Handler(void)
{
  while (1)
  {
  }
}

/**
 * @brief This function handles System service call via SWI instruction.
 */
void SVC_Handler(void)
{
}

/**
 * @brief This function handles Pendable request for system service.
 */
void PendSV_Handler(void)
{
}

/**
 * @brief This function handles System tick timer.
 */
void SysTick_Handler(void)
{
  HAL_IncTick();
}

/******************************************************************************/
/* STM32G0xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32g0xx.s).                    */
/******************************************************************************/
