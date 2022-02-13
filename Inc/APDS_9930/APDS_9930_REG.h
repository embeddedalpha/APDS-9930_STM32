/*
 * APDS_9930_REG.h
 *
 *  Created on: Feb 13, 2022
 *      Author: Kunal
 */

#ifndef APDS_9930_APDS_9930_REG_H_
#define APDS_9930_APDS_9930_REG_H_

struct APDS9930_Registers{
	int ENABLE = 0x00;				//Specifies register address
	int ATIME;				//Enable of states and interrupts
	int PTIME;				//ALS ADC time
	int WTIME;				//Proximity ADC time
	int AILTL_LOW;			//Wait time
	int AILTH_HIGH;			//ALS interrupt low threshold low byte
	int AIHTL_LOW;			//ALS interrupt low threshold hi byte
	int AIHTL_HIGH;			//ALS interrupt hi threshold low byte
	int PILTL_LOW;			//ALS interrupt hi threshold hi byte
	int PILTH_HIGH;			//Proximity interrupt low threshold low byte
	int PIHTL_LOW;			//Proximity interrupt low threshold hi byte
	int PIHTH_HIGH;			//Proximity interrupt hi threshold low byte
	int PERS;				//Interrupt persistence filters
	int CONFIG;				//Configuration
	int PPULSE;				//Proximity pulse count
	int CONTROL;			//Gain control register
	int ID;					//Device ID
	int STATUS;				//Device status
	int Ch0DATAL;			//Ch0 ADC low data register
	int Ch0DATAH;			//Ch0 ADC high data register
	int Ch1DATAL;			//Ch1 ADC low data register
	int Ch1DATAH;			//Ch1 ADC high data register
	int PDATAL;				//Proximity ADC low data register
	int PDATAH;				//Proximity ADC high data register
	int POFFSET;			//Proximity offset register
}APDS9930_Registers;


struct APDS9930_Enable_Reg{
	int SAI  = 1 << 6;
	int PIEN = 1 << 5;
	int AIEN = 1 << 4;
	int WEN  = 1 << 3;
	int PEN  = 1 << 2;
	int AEN  = 1 << 1;
	int PON  = 1 << 0;
}APDS9930_Enable_Reg;

struct APDS9930_ALS_Timing_Reg{
	int Cycle_1    = 0xFF;			//2.73 ms
	int Cycle_10   = 0xF6;			//27.3 ms
	int Cycle_37   = 0xDB;			//101 ms
	int Cycle_64   = 0xC0;			//175 ms
	int Cycle_256  = 0x00;			//699 ms
}APDS9930_Enable_Reg;

struct APDS9930_Proximity_Timing_Reg{
	int Cycle_1    = 0xFF;			//2.73 ms
}APDS9930_Proximity_Timing_Reg;

struct APDS9930_Wait_Timing_Reg{
	int Wall_Time_1      = 0xFF;			//2.73 ms
	int Wall_Time_74     = 0xB6;			//202  ms
	int Wall_Time_256    = 0x00;			//699  ms
}APDS9930_Wait_Timing_Reg;

struct APDS9930_Persistence_Reg{
	//Proximity interrupt persistence. Controls rate of proximity interrupt to the host processor
	int P_Cycle_All = 0 << 4;			//Every proximity cycle generates an interrupt
	int P_Cycle_1   = 1 << 4;			//1 consecutive proximity values out of range
	int P_Cycle_2   = 2 << 4;			//2 consecutive proximity values out of range
	int P_Cycle_3   = 3 << 4;			//3 consecutive proximity values out of range
	int P_Cycle_4   = 4 << 4;			//4 consecutive proximity values out of range
	int P_Cycle_5   = 5 << 4;			//5 consecutive proximity values out of range
	int P_Cycle_6   = 6 << 4;			//6 consecutive proximity values out of range
	int P_Cycle_7   = 7 << 4;			//7 consecutive proximity values out of range
	int P_Cycle_8   = 8 << 4;			//8 consecutive proximity values out of range
	int P_Cycle_9   = 9 << 4;			//9 consecutive proximity values out of range
	int P_Cycle_10  = 10 << 4;			//10 consecutive proximity values out of range
	int P_Cycle_11  = 11 << 4;			//11 consecutive proximity values out of range
	int P_Cycle_12  = 12 << 4;			//12 consecutive proximity values out of range
	int P_Cycle_13  = 13 << 4;			//13 consecutive proximity values out of range
	int P_Cycle_14  = 14 << 4;			//14 consecutive proximity values out of range
	int P_Cycle_15  = 15 << 4;			//15 consecutive proximity values out of range
	//Interrupt persistence. Controls rate of interrupt to the host processor
	int ALS_Cycle_All = 0 << 4;			//Every proximity cycle generates an interrupt
	int ALS_Cycle_1   = 1 << 4;			//1 consecutive proximity values out of range
	int ALS_Cycle_2   = 2 << 4;			//2 consecutive proximity values out of range
	int ALS_Cycle_3   = 3 << 4;			//3 consecutive proximity values out of range
	int ALS_Cycle_4   = 4 << 4;			//4 consecutive proximity values out of range
	int ALS_Cycle_5   = 5 << 4;			//5 consecutive proximity values out of range
	int ALS_Cycle_6   = 6 << 4;			//6 consecutive proximity values out of range
	int ALS_Cycle_7   = 7 << 4;			//7 consecutive proximity values out of range
	int ALS_Cycle_8   = 8 << 4;			//8 consecutive proximity values out of range
	int ALS_Cycle_9   = 9 << 4;			//9 consecutive proximity values out of range
	int ALS_Cycle_10  = 10 << 4;		//10 consecutive proximity values out of range
	int ALS_Cycle_11  = 11 << 4;		//11 consecutive proximity values out of range
	int ALS_Cycle_12  = 12 << 4;		//12 consecutive proximity values out of range
	int ALS_Cycle_13  = 13 << 4;		//13 consecutive proximity values out of range
	int ALS_Cycle_14  = 14 << 4;		//14 consecutive proximity values out of range
	int ALS_Cycle_15  = 15 << 4;		//15 consecutive proximity values out of range
}APDS9930_Persistence_Reg;

struct APDS9930_Configuration_Reg{
	int AGL				= 1 << 2;
	int WLONG			= 1 << 1;
	int PDL				= 1 << 0;
}APDS9930_Configuration_Reg;

struct APDS9930_Control_Reg{
	int LED_Drive_STR_100mA			= 0b00 << 6;
	int LED_Drive_STR_50mA			= 0b01 << 6;
	int LED_Drive_STR_25mA			= 0b10 << 6;
	int LED_Drive_STR_12_5mA		= 0b11 << 6;

	int PDIODE_CH1 					= 0b10 << 4;

	int PGAIN_1X					= 0b00 << 2;
	int PGAIN_2X					= 0b01 << 2;
	int PGAIN_4X					= 0b10 << 2;
	int PGAIN_8X					= 0b11 << 2;

	int AGAIN_1X					= 0b00 << 0;
	int AGAIN_2X					= 0b01 << 0;
	int AGAIN_16X					= 0b10 << 0;
	int AGAIN_120X					= 0b11 << 0;

}APDS9930_Control_Reg;

struct APDS9930_Status_Reg{
	int PSAT				= 1 << 6;
	int PINT			    = 1 << 5;
	int AINT				= 1 << 4;
	int PVALID				= 1 << 1;
	int AVALID				= 1 << 0;
}APDS9930_Status_Reg;




#endif /* APDS_9930_APDS_9930_REG_H_ */
