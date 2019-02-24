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
	DIO_vInit();


	SSD_u8SetOn(0);
	SSD_u8SetOn(1);
	SSD_u8SetOn(2);
	while(1)
	{

		for(u8 k=1; k < 10; k++)
		{
		for(u8 j=1; j < 10; j++)
		{

			for(u8 i=0; i < 10; i++)
			{
				SSD_u8SetValue(0, i);
				Lib_vDelayMs(10);
			}
			SSD_u8SetValue(1, j);
			Lib_vDelayMs(10);

		}
		SSD_u8SetValue(2, k);
		Lib_vDelayMs(10);
		}





	}



}
