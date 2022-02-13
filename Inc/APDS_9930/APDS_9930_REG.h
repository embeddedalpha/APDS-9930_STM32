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

#define APDS9930_P_Cycle_AlL		0x00
#define APDS9930_P_Cycle_1			0x10
#define APDS9930_P_Cycle_2			0x20
#define APDS9930_P_Cycle_3			0x30
#define APDS9930_P_Cycle_4			0x40
#define APDS9930_P_Cycle_5			0x50
#define APDS9930_P_Cycle_6			0x60
#define APDS9930_P_Cycle_7			0x70
#define APDS9930_P_Cycle_8			0x80
#define APDS9930_P_Cycle_9			0x90
#define APDS9930_P_Cycle_10			0xA0
#define APDS9930_P_Cycle_11			0xB0
#define APDS9930_P_Cycle_12			0xC0
#define APDS9930_P_Cycle_13			0xD0
#define APDS9930_P_Cycle_14			0xE0
#define APDS9930_P_Cycle_15			0xF0

#define APDS9930_ALS_Cycle_All		0x00
#define APDS9930_ALS_Cycle_1		0x01
#define APDS9930_ALS_Cycle_2		0x02
#define APDS9930_ALS_Cycle_3		0x03
#define APDS9930_ALS_Cycle_4		0x04
#define APDS9930_ALS_Cycle_5		0x05
#define APDS9930_ALS_Cycle_6		0x06
#define APDS9930_ALS_Cycle_7		0x07
#define APDS9930_ALS_Cycle_8		0x08
#define APDS9930_ALS_Cycle_9		0x09
#define APDS9930_ALS_Cycle_10		0x0A
#define APDS9930_ALS_Cycle_11		0x0B
#define APDS9930_ALS_Cycle_12		0x0C
#define APDS9930_ALS_Cycle_13		0x0D
#define APDS9930_ALS_Cycle_14		0x0E
#define APDS9930_ALS_Cycle_15		0x0F

#define APDS9930_CONFG_AGL			0x00
#define APDS9930_CONFG_WLONG		0x02
#define APDS9930_CONFG_PDL			0x04

#define APDS9930_CNTRL_LED_Drive_STR_100mA			0x00
#define APDS9930_CNTRL_LED_Drive_STR_50mA			0x40
#define APDS9930_CNTRL_LED_Drive_STR_25mA			0x80
#define APDS9930_CNTRL_LED_Drive_STR_12_5mA			0xC0

#define APDS9930_CNTRL_PDIODE_CH1			0x20

#define APDS9930_CNTRL_PGAIN_1X			0x00
#define APDS9930_CNTRL_PGAIN_2X			0x04
#define APDS9930_CNTRL_PGAIN_4X			0x08
#define APDS9930_CNTRL_PGAIN_8X			0x0C

#define APDS9930_CNTRL_AGAIN_1X			0x00
#define APDS9930_CNTRL_AGAIN_2X			0x01
#define APDS9930_CNTRL_AGAIN_16X			0x02
#define APDS9930_CNTRL_AGAIN_120X			0x03




typedef enum {
	 PSAT				= 1 << 6,
	 PINT			    = 1 << 5,
	 AINT				= 1 << 4,
	 PVALID				= 1 << 1,
	 AVALID				= 1 << 0,
}APDS9930_Status_Reg;




#endif /* APDS_9930_APDS_9930_REG_H_ */
