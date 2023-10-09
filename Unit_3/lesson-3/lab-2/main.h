/*
 * main.h
 *
 *  Created on: Sep 15, 2023
 *      Author: SaWa
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef volatile unsigned int vuint32;
#define RCC_base 0x40021000
#define RCC__APB2ENR 0x18
#define portA_base 0x40010800
#define PortA_CHR 0x04
#define PortA_ODR 0x0C

typedef union {
	vuint32 allfield;
	struct{
		vuint32 reserved :2;
		vuint32 pin_2:1;
	}pin;
}RCC_APB2ENR_t;
volatile RCC_APB2ENR_t* RCC_APB2ENR=(volatile RCC_APB2ENR_t* )(RCC_base+RCC__APB2ENR);		// pointer >> RCC_APB2ENR

typedef union {
	vuint32 allfield;
	struct{
		vuint32 reserved :13;
		vuint32 pin_13:1;
	}pin;
}PortA_R_ODR_t;
volatile PortA_R_ODR_t * PortA_R_ODR =(volatile PortA_R_ODR_t *)(portA_base+PortA_ODR);  	// pointer >> PortA_R_ODR

typedef union {
	vuint32 allfield;
	struct{
		vuint32 reserved :20;
		vuint32 pins_20_24:4;
	}pins;
}PortA_R_CHR_t;
volatile PortA_R_CHR_t* PortA_R_CHR = (volatile PortA_R_CHR_t*)(portA_base+PortA_CHR);	// pointer >> PortA_R_CHR


#endif /* MAIN_H_ */
