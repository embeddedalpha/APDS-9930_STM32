/*
 * APDS_9930_REG.h
 *
 *  Created on: Feb 13, 2022
 *      Author: Kunal
 */

#ifndef APDS_9930_APDS_9930_REG_H_
#define APDS_9930_APDS_9930_REG_H_

typedef enum APDS9930_Registers{
	 ENABLE = 0x00,				//Specifies register address
	 ATIME,				//Enable of states and interrupts
	 PTIME,				//ALS ADC time
	 WTIME,				//Proximity ADC time
	 AILTL_LOW,			//Wait time
	 AILTH_HIGH,			//ALS interrupt low threshold low byte
	 AIHTL_LOW,			//ALS interrupt low threshold hi byte
	 AIHTL_HIGH,			//ALS interrupt hi threshold low byte
	 PILTL_LOW,			//ALS interrupt hi threshold hi byte
	 PILTH_HIGH,			//Proximity interrupt low threshold low byte
	 PIHTL_LOW,			//Proximity interrupt low threshold hi byte
	 PIHTH_HIGH,			//Proximity interrupt hi threshold low byte
	 PERS,				//Interrupt persistence filters
	 CONFIG,				//Configuration
	 PPULSE,				//Proximity pulse count
	 CONTROL,			//Gain control register
	 ID,					//Device ID
	 STATUS,				//Device status
	 Ch0DATAL,			//Ch0 ADC low data register
	 Ch0DATAH,			//Ch0 ADC high data register
	 Ch1DATAL,			//Ch1 ADC low data register
	 Ch1DATAH,			//Ch1 ADC high data register
	 PDATAL,				//Proximity ADC low data register
	 PDATAH,				//Proximity ADC high data register
	 POFFSET,			//Proximity offset register
}APDS9930_Registers;


typedef enum APDS9930_Enable_Reg{
	 SAI  = 1 << 6,
	 PIEN = 1 << 5,
	 AIEN = 1 << 4,
	 WEN  = 1 << 3,
	 PEN  = 1 << 2,
	 AEN  = 1 << 1,
	 PON  = 1 << 0,
}APDS9930_Enable_Reg;

typedef enum APDS9930_ALS_Timing_Reg{
	 Cycle_1    = 0xFF,			//2.73 ms
	 Cycle_10   = 0xF6,			//27.3 ms
	 Cycle_37   = 0xDB,			//101 ms
	 Cycle_64   = 0xC0,			//175 ms
	 Cycle_256  = 0x00,			//699 ms
}APDS9930_Enable_Reg;

typedef enum APDS9930_Proximity_Timing_Reg{
	 Cycle_1    = 0xFF,			//2.73 ms
}APDS9930_Proximity_Timing_Reg;

typedef enum APDS9930_Wait_Timing_Reg{
	 Wall_Time_1      = 0xFF,			//2.73 ms
	 Wall_Time_74     = 0xB6,			//202  ms
	 Wall_Time_256    = 0x00,			//699  ms
}APDS9930_Wait_Timing_Reg;

typedef enum APDS9930_Persistence_Reg{
	//Proximity interrupt persistence. Controls rate of proximity interrupt to the host processor
	 P_Cycle_All = 0 << 4,			//Every proximity cycle generates an interrupt
	 P_Cycle_1   = 1 << 4,			//1 consecutive proximity values out of range
	 P_Cycle_2   = 2 << 4,			//2 consecutive proximity values out of range
	 P_Cycle_3   = 3 << 4,			//3 consecutive proximity values out of range
	 P_Cycle_4   = 4 << 4,			//4 consecutive proximity values out of range
	 P_Cycle_5   = 5 << 4,			//5 consecutive proximity values out of range
	 P_Cycle_6   = 6 << 4,			//6 consecutive proximity values out of range
	 P_Cycle_7   = 7 << 4,			//7 consecutive proximity values out of range
	 P_Cycle_8   = 8 << 4,			//8 consecutive proximity values out of range
	 P_Cycle_9   = 9 << 4,			//9 consecutive proximity values out of range
	 P_Cycle_10  = 10 << 4,			//10 consecutive proximity values out of range
	 P_Cycle_11  = 11 << 4,			//11 consecutive proximity values out of range
	 P_Cycle_12  = 12 << 4,			//12 consecutive proximity values out of range
	 P_Cycle_13  = 13 << 4,			//13 consecutive proximity values out of range
	 P_Cycle_14  = 14 << 4,			//14 consecutive proximity values out of range
	 P_Cycle_15  = 15 << 4,			//15 consecutive proximity values out of range
	//Interrupt persistence. Controls rate of interrupt to the host processor
	 ALS_Cycle_All = 0 << 4,			//Every proximity cycle generates an interrupt
	 ALS_Cycle_1   = 1 << 4,			//1 consecutive proximity values out of range
	 ALS_Cycle_2   = 2 << 4,			//2 consecutive proximity values out of range
	 ALS_Cycle_3   = 3 << 4,			//3 consecutive proximity values out of range
	 ALS_Cycle_4   = 4 << 4,			//4 consecutive proximity values out of range
	 ALS_Cycle_5   = 5 << 4,			//5 consecutive proximity values out of range
	 ALS_Cycle_6   = 6 << 4,			//6 consecutive proximity values out of range
	 ALS_Cycle_7   = 7 << 4,			//7 consecutive proximity values out of range
	 ALS_Cycle_8   = 8 << 4,			//8 consecutive proximity values out of range
	 ALS_Cycle_9   = 9 << 4,			//9 consecutive proximity values out of range
	 ALS_Cycle_10  = 10 << 4,		//10 consecutive proximity values out of range
	 ALS_Cycle_11  = 11 << 4,		//11 consecutive proximity values out of range
	 ALS_Cycle_12  = 12 << 4,		//12 consecutive proximity values out of range
	 ALS_Cycle_13  = 13 << 4,		//13 consecutive proximity values out of range
	 ALS_Cycle_14  = 14 << 4,		//14 consecutive proximity values out of range
	 ALS_Cycle_15  = 15 << 4,		//15 consecutive proximity values out of range
}APDS9930_Persistence_Reg;

typedef enum APDS9930_Configuration_Reg{
	 AGL				= 1 << 2,
	 WLONG			= 1 << 1,
	 PDL				= 1 << 0,
}APDS9930_Configuration_Reg;

typedef enum APDS9930_Control_Reg{
	 LED_Drive_STR_100mA			= 0b00 << 6,
	 LED_Drive_STR_50mA			= 0b01 << 6,
	 LED_Drive_STR_25mA			= 0b10 << 6,
	 LED_Drive_STR_12_5mA		= 0b11 << 6,

	 PDIODE_CH1 					= 0b10 << 4,

	 PGAIN_1X					= 0b00 << 2,
	 PGAIN_2X					= 0b01 << 2,
	 PGAIN_4X					= 0b10 << 2,
	 PGAIN_8X					= 0b11 << 2,

	 AGAIN_1X					= 0b00 << 0,
	 AGAIN_2X					= 0b01 << 0,
	 AGAIN_16X					= 0b10 << 0,
	 AGAIN_120X					= 0b11 << 0,

}APDS9930_Control_Reg;

typedef enum APDS9930_Status_Reg{
	 PSAT				= 1 << 6,
	 PINT			    = 1 << 5,
	 AINT				= 1 << 4,
	 PVALID				= 1 << 1,
	 AVALID				= 1 << 0,
}APDS9930_Status_Reg;




#endif /* APDS_9930_APDS_9930_REG_H_ */
