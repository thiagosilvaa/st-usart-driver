/**
  ******************************************************************************
  * @file    main.c
  * @author  thiagosilva-trix
  * @version V1.0.0
  * @date    22 de jun de 2017
  * @brief   The main program body.
  ******************************************************************************   
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"
#include "usart.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  A simple delay generate function.
  * @param  None
  * @retval None
  */
void Delay(int counter)
{
  int i;

  for(i = 0; i < counter*1000; i++);
}

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
	/* Initialize USART1 with default params:
		8b,1 stop-bit,none parity, no flow-control,115200
	*/
	USART1_DeInit();

	while(1)
	{
		USART1_PutString("Hello USART!\n");
		Delay(500);
	}
}

/*******************************END OF FILE************************************/
