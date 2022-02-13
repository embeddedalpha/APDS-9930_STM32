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

int main(void)
{
	MCU_Clock_Setup();
	Console_Init(USART1, 9600);


	APDS9930.I2C = I2C1;
	APDS9930.mode = I2C_Fast_Mode;
	I2C_Master_Init(APDS9930);

	int temp;

	temp = I2C_Master_Read_Register(APDS9930, APDS9930_Address, APDS9930_Registers.ID);



	for(;;);
}
