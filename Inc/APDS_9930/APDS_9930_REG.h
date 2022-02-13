/*
 * APDS_9930_REG.h
 *
 *  Created on: Feb 13, 2022
 *      Author: Kunal
 */

#ifndef APDS_9930_APDS_9930_REG_H_
#define APDS_9930_APDS_9930_REG_H_

#define APDS9930_ENABLE		0x00
#define APDS9930_ATIME		0x01
#define APDS9930_PTIME		0x02
#define APDS9930_WTIME		0x03
#define APDS9930_AILTL		0x04
#define APDS9930_AILTH		0x05
#define APDS9930_AIHTH		0x06
#define APDS9930_AIHTL		0x07
#define APDS9930_PILTL		0x08
#define APDS9930_PILTH		0x09
#define APDS9930_PIHTL		0x0A
#define APDS9930_PIHTH		0x0B
#define APDS9930_PERS		0x0C
#define APDS9930_CONFIG		0x0D
#define APDS9930_PPULSE		0x0E
#define APDS9930_CONTROL	0x0F
#define APDS9930_ID			0x12
#define APDS9930_STATUS		0x13
#define APDS9930_Ch0DATAL	0x14
#define APDS9930_Ch0DATAH	0x15
#define APDS9930_Ch1DATAL	0x16
#define APDS9930_Ch1DATAH	0x17
#define APDS9930_PDATAL		0x18
#define APDS9930_PDATAH		0x19
#define APDS9930_POFFSET	0x1E

#define APDS9930_SAI		1<<6
#define APDS9930_PIEN		1<<5
#define APDS9930_AIEN		1<<4
#define APDS9930_WEN		1<<3
#define APDS9930_PEN		1<<2
#define APDS9930_AEN		1<<1
#define APDS9930_PON		1<<0

#define APDS9930_ATIME_CYCLES_1			0xFF
#define APDS9930_ATIME_CYCLES_10		0xF6
#define APDS9930_ATIME_CYCLES_37		0xDB
#define APDS9930_ATIME_CYCLES_64		0xC0
#define APDS9930_ATIME_CYCLES_256		0x00

#define APDS9930_Proximity_Time_Control		0xFF

#define APDS9930_Wait_Time_1ms			0xFF
#define APDS9930_Wait_Time_74ms			0xB6
#define APDS9930_Wait_Time_256ms		0x00


typedef enum {
	 SAI  = 1 << 6,
	 PIEN = 1 << 5,
	 AIEN = 1 << 4,
	 WEN  = 1 << 3,
	 PEN  = 1 << 2,
	 AEN  = 1 << 1,
	 PON  = 1 << 0,
}APDS9930_Enable_Reg;

typedef enum {
	 Cycle_1    = 0xFF,			//2.73 ms
	 Cycle_10   = 0xF6,			//27.3 ms
	 Cycle_37   = 0xDB,			//101 ms
	 Cycle_64   = 0xC0,			//175 ms
	 Cycle_256  = 0x00,			//699 ms
}APDS9930_En_Reg;


typedef enum {
	 Wall_Time_1      = 0xFF,			//2.73 ms
	 Wall_Time_74     = 0xB6,			//202  ms
	 Wall_Time_256    = 0x00,			//699  ms
}APDS9930_Wait_Timing_Reg;

typedef enum {
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

typedef enum {
	 AGL				= 1 << 2,
	 WLONG			= 1 << 1,
	 PDL				= 1 << 0,
}APDS9930_Configuration_Reg;

typedef enum {
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

typedef enum {
	 PSAT				= 1 << 6,
	 PINT			    = 1 << 5,
	 AINT				= 1 << 4,
	 PVALID				= 1 << 1,
	 AVALID				= 1 << 0,
}APDS9930_Status_Reg;




#endif /* APDS_9930_APDS_9930_REG_H_ */
