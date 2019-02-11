/*
 * SSD_Prog.c
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#include "STD_Types.h"

#include "DIO_Interface.h"

#include "SSD_Interface.h"
#include "SSD_Private.h"
#include "SSD_Config.h"




u8 SSD_Au8INIT_FLAG[SSD_NO_OF_SSDs] =  {SSD_u8_SSD_INIT_FLAG_ZERO, SSD_u8_SSD_INIT_FLAG_ZERO};
u8 SSD_u8LastDigit[SSD_NO_OF_SSDs]  =  {SSD_u8_SSD_LAST_DIG_INIT_VAL, SSD_u8_SSD_LAST_DIG_INIT_VAL};
u8 SSD_u8OffFlag[SSD_NO_OF_SSDs]    =  {SSD_u8_SSD_SET_OFF_FLAG_OFF, SSD_u8_SSD_SET_OFF_FLAG_OFF};


/*
 * Description: Function to set pins of a SSD to display a certain digit on it
 * Inputs: the SSD number according to the number of SSD specified in the configuration file
 * 		   and the digit needed to be displayed
 * output: the Error state of the function
*/


u8 SSD_u8SetValue(u8 copy_SSD_ModuleNum, u8 copy_SSD_ModuleValue)
{


	/*Local Variable holding the error state*/
	u8 Local_u8Error;

	if ((copy_SSD_ModuleNum >= SSD_NO_OF_SSDs) || (copy_SSD_ModuleValue > SSD_MAX_DIGIT_FOR_SSD))
	{
		Local_u8Error = STD_ERROR_NOK;
	}
	else
	{
		if (SSD_u8OffFlag[copy_SSD_ModuleNum] == SSD_u8_SSD_SET_OFF_FLAG_OFF)
		{
			SSD_Au8INIT_FLAG[copy_SSD_ModuleNum] = SSD_u8_SSD_INIT_FLAG_ONE;
			SSD_u8LastDigit[copy_SSD_ModuleNum] = copy_SSD_ModuleValue;

			/*Checking whether the passed SSD number is related to Common Cathode SSD*/
			if (SSD_Au8ModuleType[copy_SSD_ModuleNum] == SSD_COMMON_CATHODE)
			{
				  /*handling the enable pin according to the cathode SSD */
				  Local_u8Error = DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_SSD_ModuleNum],DIO_PIN_LOW);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_SSD_ModuleNum][i],SSD_Au8SEG_PATTERN_CATHODE[copy_SSD_ModuleValue][i]);
				  }
			}
			else
			{
				  /*handling the enable pin according to the anode SSD */
				  DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_SSD_ModuleNum],DIO_PIN_HIGH);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_SSD_ModuleNum][i],SSD_Au8SEG_PATTERN_ANODE[copy_SSD_ModuleValue][i]);
				  }
			}
		}
		else
			Local_u8Error = STD_ERROR_OK;
	}
	/*Function return*/
	return Local_u8Error;
}


u8 SSD_u8SetOn(u8 copy_u8SSDNum)
{
	/*Local Variable holding the error state*/
		u8 Local_u8Error;

		SSD_u8OffFlag[SSD_NO_OF_SSDs] = SSD_u8_SSD_SET_OFF_FLAG_OFF;

		if (copy_u8SSDNum >= SSD_NO_OF_SSDs)
		{
			Local_u8Error = STD_ERROR_NOK;
		}
		else
		{
			/*Checking whether the passed SSD number is related to Common Cathode SSD*/
			if (SSD_Au8ModuleType[copy_u8SSDNum] == SSD_COMMON_CATHODE)
			{
				if (SSD_Au8INIT_FLAG[copy_u8SSDNum] == SSD_u8_SSD_INIT_FLAG_ZERO)
				{
				  /*handling the enable pin according to the cathode SSD */
				  Local_u8Error = DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_u8SSDNum],DIO_PIN_LOW);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_u8SSDNum][i],SSD_Au8SEG_PATTERN_CATHODE[SSD_Au8ModuleInitValue[copy_u8SSDNum]][i]);
				  }
				}
				else
				{
				  /*handling the enable pin according to the cathode SSD */
					Local_u8Error = DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_u8SSDNum],DIO_PIN_LOW);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_u8SSDNum][i],SSD_Au8SEG_PATTERN_CATHODE[SSD_u8LastDigit[copy_u8SSDNum]][i]);
				  }
				}
			}
			else
			{	/*If the SSD is Common anode*/
				if (SSD_Au8INIT_FLAG[copy_u8SSDNum] == SSD_u8_SSD_INIT_FLAG_ZERO)
				{
				  /*handling the enable pin according to the anode SSD */
				  DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_u8SSDNum],DIO_PIN_HIGH);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_u8SSDNum][i],SSD_Au8SEG_PATTERN_ANODE[SSD_Au8ModuleInitValue[copy_u8SSDNum]][i]);
				  }
				}
				else
				{
				  /*handling the enable pin according to the anode SSD */
				  DIO_u8SetPinValue(SSD_Au8ModuleEnable[copy_u8SSDNum],DIO_PIN_HIGH);
				  for (u8 i = SSD_u8_INIT_ITER ; i < SSD_NUMBER_OF_SEGMENTS; i++)
				  {
					  Local_u8Error = DIO_u8SetPinValue(SSD_Au8Segments[copy_u8SSDNum][i],SSD_Au8SEG_PATTERN_ANODE[SSD_u8LastDigit[copy_u8SSDNum]][i]);
				  }
				}
			}
		}
		/*Function return*/
		return Local_u8Error;
}


u8 SSD_u8_SetOff (u8 Copy_u8SsdNb)
{
	/*Local Variable holding the error state*/
	u8 Local_u8Error;
	SSD_u8OffFlag[SSD_NO_OF_SSDs] = SSD_u8_SSD_SET_OFF_FLAG_ON;

	if (Copy_u8SsdNb >= SSD_NO_OF_SSDs)
	{
		Local_u8Error = STD_ERROR_NOK;
	}
	else
	{
		/*Checking whether the passed SSD number is related to Common Cathode SSD*/
		if (SSD_Au8ModuleType[Copy_u8SsdNb] == SSD_COMMON_CATHODE)
		{
			  /*handling the enable pin according to the cathode SSD */
			  Local_u8Error = DIO_u8SetPinValue(SSD_Au8ModuleEnable[Copy_u8SsdNb],DIO_PIN_HIGH);
		}
		else
		{
			  /*handling the enable pin according to the anode SSD */
			  Local_u8Error = DIO_u8SetPinValue(SSD_Au8ModuleEnable[Copy_u8SsdNb],DIO_PIN_LOW);
		}
	}
	/*Function return*/
	return Local_u8Error;
}


