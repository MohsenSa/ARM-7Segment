/**
  ******************************************************************************
  * File Name          : main.c
  * Date               : 07/09/2020 21:03:31
  * Description        : Main program body
  ******************************************************************************
  *
  * COPYRIGHT(c) 2020 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  /* USER CODE BEGIN 2 */
		int counter = 0;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
		if (HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2)==GPIO_PIN_SET)
		{
			counter++;
			counter %= 10;
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //E
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //D
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //C
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //DP
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //G
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //F
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //A
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET); //B
			if (counter==0)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //E
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
			}
			else if (counter==1)
			{
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); 
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET);
			}
			else if (counter==2)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //E
			  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
			}
			else if (counter==3)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
			  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
			}
			else if (counter==4)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
			}
			else if (counter==5)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
			  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
			}
			else if (counter==6)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
			  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //E
			}
			else if (counter==7)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
			}
			else if (counter==8)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //E
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
			}
			else if (counter==9)
			{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //D
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //C
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //G
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //F
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //A
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); //B
			}
			HAL_Delay(300);
		}
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */

  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_SYSCLK;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0);

}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __GPIOA_CLK_ENABLE();
  __GPIOB_CLK_ENABLE();

  /*Configure GPIO pins : PA0 PA1 PA2 PA3 
                           PA5 PA6 PA7 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3 
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : PB0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PB2 */
  GPIO_InitStruct.Pin = GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
