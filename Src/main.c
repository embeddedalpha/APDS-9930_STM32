#include <stdint.h>
#include "main.h"
#include "Console/Console.h"
#include "I2C/I2C.h"
#include "APDS_9930/APDS_9930_REG.h"


#define APDS9930_Address 0x39


I2C_Config APDS9930;

//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif


void APSD9930_Init(I2C_TypeDef *I2C);

int main(void)
{
	MCU_Clock_Setup();
	Console_Init(USART1, 9600);




	int temp;






	for(;;);
}




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

	I2C_Master_Write_Register(APDS9930, APDS9930_Address, 0x00, 0x00);
}
