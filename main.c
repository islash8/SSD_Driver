/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: islas
 */

#include "STD_Types.h"
#include "Lib_Delay.h"
#include "DIO_Interface.h"

#include "SSD_Interface.h"






void main (void)
{


	while(1)
	{
		/*SSD_u8SetValue(0, SSD_u8_NUMBER_ZERO);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_ONE);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_TWO);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_THREE);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_FOUR);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_FIVE);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_SIX);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_SEVEN);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_EIGHT);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_NUMBER_NINE);
		Lib_vDelayMs(500);
		SSD_u8SetValue(0, SSD_u8_OFF);
		Lib_vDelayMs(500);*/

		DIO_u8SetPinValue(DIO_PIN24, DIO_PIN_HIGH);
	}



}
