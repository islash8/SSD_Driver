/*
 * SSD_Prog.c
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#include "STD_Types.h"

#include "DIO_Interface.h"

#include "SSD_Private.h"
#include "SSD_Config.h"
#include "SSD_Interface.h"


void SSD_vInit(void)
{

	u8 local_u8SSD_NumberCounter = 0;
	u8 local_u8SSD_PinsCounter = 0;


	while(local_u8SSD_NumberCounter < SSD_NO_OF_SSDs)
	{
		// initalize direction

		for(local_u8SSD_PinsCounter = 0; local_u8SSD_PinsCounter < SSD_NUMBER_OF_SEGMENTS;  local_u8SSD_PinsCounter++)
		{
			DIO_u8SetPinDirection(SSD_Au8Segments[local_u8SSD_NumberCounter][local_u8SSD_PinsCounter], DIO_PIN_OUTPUT);
		}

		for(local_u8SSD_PinsCounter = 0; local_u8SSD_PinsCounter < SSD_NO_OF_SSDs;  local_u8SSD_PinsCounter++)
		{
			DIO_u8SetPinDirection(SSD_Au8ModuleEnable[local_u8SSD_NumberCounter], DIO_PIN_OUTPUT);
		}
		// initalize value

		if(SSD_Au8ModuleType[local_u8SSD_NumberCounter ] == SSD_COMMON_CATHODE)
		{
			switch(SSD_Au8ModuleInitValue[local_u8SSD_NumberCounter])
			{

			case SSD_u8_NUMBER_ZERO:

				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_ONE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_TWO:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_THREE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_FOUR:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_FIVE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_SIX:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_SEVEN:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_EIGHT:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_NINE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			}
		}
		else
		{
			switch(SSD_Au8ModuleInitValue[local_u8SSD_NumberCounter])
			{

			case SSD_u8_NUMBER_ZERO:

				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_ONE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_TWO:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_THREE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_FOUR:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_FIVE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_SIX:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_SEVEN:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_HIGH);
				break;
			case SSD_u8_NUMBER_EIGHT:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			case SSD_u8_NUMBER_NINE:
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTA], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTB], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTC], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTD], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTE], DIO_PIN_HIGH);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTF], DIO_PIN_LOW);
				DIO_u8SetPinValue(SSD_Au8Segments[local_u8SSD_NumberCounter][SSD_SEGMENTG], DIO_PIN_LOW);
				break;
			}
		}

		switch(SSD_Au8ModuleType[local_u8SSD_NumberCounter ])
		{
		case 0:
			DIO_u8SetPinValue(SSD_Au8ModuleEnable[local_u8SSD_NumberCounter], DIO_PIN_LOW);
			break;
		case SSD_COMMON_ANODE:
			DIO_u8SetPinValue(SSD_Au8ModuleEnable[local_u8SSD_NumberCounter], DIO_PIN_HIGH);
			break;
		}
		local_u8SSD_NumberCounter++;
	}
}
