/*
 * APDS9930.c
 *
 *  Created on: 13-Feb-2022
 *      Author: Kunal
 */

#include "APDS9930.h"


void APSD9930_Init(I2C_TypeDef *I2C)
{
	APDS9930.I2C = I2C1;
	APDS9930.mode = I2C_Fast_Mode;
	I2C_Master_Init(APDS9930);

	int temp = I2C_Master_Read_Register(APDS9930, APDS9930_Address, ID);
	if(temp == 0x39)
	{
#if __APDS9930_DEBUG__
		printConsole(USART1, "APDS9930 can be read\r\n");
#endif
	}
	else
	{
#if __APDS9930_DEBUG__
		printConsole(USART1, "APDS9930 can be read\r\n");
#endif
	}

	I2C_Master_Write_Register(APDS9930, APDS9930_Address, APDS9930_ENABLE, 0x00);
	I2C_Master_Write_Register(APDS9930, APDS9930_Address, APDS9930_ATIME, APDS9930_ATIME_CYCLES_1);
	I2C_Master_Write_Register(APDS9930, APDS9930_Address, APDS9930_PTIME, APDS9930_PTIME_CYCLE_1);
	I2C_Master_Write_Register(APDS9930, APDS9930_Address, APDS9930_WTIME, APDS9930_WTime_1ms);
	I2C_Master_Write_Register(APDS9930, APDS9930_Address, APDS9930_PPULSE, 0x0E);



}
