#include "gpio.h"

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{
	
  /* GPIO Ports Clock Enable */
  GPIO_InitTypeDef GPIO_InitStruct = {0};
	#ifdef BOOTLOADER_DEVICE_TM
		/* GPIO Ports Clock Enable */
		__HAL_RCC_GPIOB_CLK_ENABLE();

		/*Configure GPIO pins : PBPin PBPin PBPin */
		GPIO_InitStruct.Pin = LD1_GREEN_Pin|LD2_RED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	#endif
}

void MX_GPIO_DeInit(void)
{

  /* GPIO Ports Clock Enable */
  GPIO_InitTypeDef GPIO_InitStruct = {0};
	#ifdef BOOTLOADER_DEVICE_TM
		/* GPIO Ports Clock Enable */
		__HAL_RCC_GPIOB_CLK_DISABLE();
		/*Configure GPIO pins : PBPin PBPin PBPin */
	 
		HAL_GPIO_DeInit(GPIOB, LD1_GREEN_Pin|LD2_RED_Pin);
	#endif
}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
