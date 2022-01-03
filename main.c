/*
 * main.c
 *
 *  Created on: Jan 1, 2022
 *      Author: Moaz Mahmoud
 */
#include "lib/STD_TYPES.h"
#include "lib/BIT_MATH.h"
#include"MCAL/DIO/DIO_interface.h"
#include"MCAL/GIE/GIE_interface.h"
#include "MCAL/EXTI/EXTI_interface.h"
#include "util/delay.h"


int main(){
	GIE_vdEnable();
	DIO_u8SetPinDirection(portD,pin2__,pinInput);
	DIO_u8SetPinValue(portD,pin2__,pinHigh);

	DIO_u8SetPinDirection(portA,pin0__,pinOutput);
	EXT0_vdEnable();

	while (1){

	}
}

void __vector_1(void) __attribute__((signal));

void __vector_1(void){
	DIO_u8SetPinValue(portA,pin0__,pinHigh);
	_delay_ms(500);
	DIO_u8SetPinValue(portA,pin0__,pinLow);

}
