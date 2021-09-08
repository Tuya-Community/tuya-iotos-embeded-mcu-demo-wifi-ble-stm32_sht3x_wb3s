/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************/
#include "gpio.h"
#include "connect_wifi.h"

/** Pinout Configuration
*/
void MX_GPIO_Init(void)
{
   GPIO_InitTypeDef GPIO_InitStruct;
	
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
	
	 /*Configure GPIO pin : WIFI_KEY_Pin£®≈‰Õ¯∞¥º¸£© */
  GPIO_InitStruct.Pin = WIFI_KEY_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(WIFI_KEY_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2£®≈‰Õ¯÷∏ æµ∆£© */
  GPIO_InitStruct.Pin = WIFI_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(WIFI_LED_GPIO_Port, &GPIO_InitStruct);

}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
