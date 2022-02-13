/*
 * APDS9930.h
 *
 *  Created on: 13-Feb-2022
 *      Author: Kunal
 */

#ifndef APDS_9930_APDS9930_H_
#define APDS_9930_APDS9930_H_

#include "main.h"
#include "I2C/I2C.h"
#include "Console/Console.h"
#include "APDS_9930_REG.h"

#define APDS9930_Address 0x39

I2C_Config APDS9930;

void APSD9930_Init(I2C_TypeDef *I2C);

int APDS9930_ALS_Channel_0(void);

int APDS9930_ALS_Channel_1(void);

#endif /* APDS_9930_APDS9930_H_ */
