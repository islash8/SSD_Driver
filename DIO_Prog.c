/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 08 FEB 2019                                                            */
/* Version : V03                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/*  This source file is used for the implementation DIO driver, provides a layer of */
/*  abstraction of the hardware of MCU (ATmega32) itself.                           */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Header files  <---------------------------------*/
/************************************************************************************/

#include "STD_Types.h"          /* ---> Contains the data types used in the project */
#include "LIB_Bit_Operations.h" /* ---> Contains bit and port operations            */

#include "DIO_Interface.h"		/* ---> Contains header files of used functions     */
#include "DIO_Private.h"        /* ---> Contains headers of private functions       */
#include "DIO_Config.h"			/* ---> Contains the configurations to be used      */

/************************************************************************************/

/************************************************************************************/
/* -------------------------> Functions implementation <----------------------------*/
/************************************************************************************/

/************************************************************************************/
/* Name: 0. DIO_vInit											     	            */
/* Description: Set pin direction													*/
/* Inputs:  -> void																	*/
/* Outputs: -> void                                                      			*/
/************************************************************************************/

void DIO_vInit (void)
{

/************************************************************************************/
/* -------------------------------> Port A <----------------------------------------*/
/************************************************************************************/
/* ---------------------------> Direction configuration <---------------------------*/
/************************************************************************************/


	DIO_Register_DDRA = CONC_8BIT(DIO_u8_PIN0_INIT_DIR,  DIO_u8_PIN1_INIT_DIR,
								  DIO_u8_PIN2_INIT_DIR,  DIO_u8_PIN3_INIT_DIR,
								  DIO_u8_PIN4_INIT_DIR,  DIO_u8_PIN5_INIT_DIR,
								  DIO_u8_PIN6_INIT_DIR,  DIO_u8_PIN7_INIT_DIR);

/************************************************************************************/
/* --------------------------------> PORT configuration <---------------------------*/
/************************************************************************************/

	DIO_Register_PORTA = CONC_8BIT(DIO_u8_PIN0_INIT_PORT_VAL,  DIO_u8_PIN1_INIT_PORT_VAL,
								   DIO_u8_PIN2_INIT_PORT_VAL,  DIO_u8_PIN3_INIT_PORT_VAL,
							       DIO_u8_PIN4_INIT_PORT_VAL,  DIO_u8_PIN5_INIT_PORT_VAL,
								   DIO_u8_PIN6_INIT_PORT_VAL,  DIO_u8_PIN7_INIT_PORT_VAL);

/************************************************************************************/
/* --------------------------------> PIN configuration <----------------------------*/
/************************************************************************************/

	DIO_Register_PINA = CONC_8BIT(DIO_u8_PIN0_INIT_PIN_VAL,  DIO_u8_PIN1_INIT_PIN_VAL,
								  DIO_u8_PIN2_INIT_PIN_VAL,  DIO_u8_PIN3_INIT_PIN_VAL,
								  DIO_u8_PIN4_INIT_PIN_VAL,  DIO_u8_PIN5_INIT_PIN_VAL,
							      DIO_u8_PIN6_INIT_PIN_VAL,  DIO_u8_PIN7_INIT_PIN_VAL);

/************************************************************************************/
/* -------------------------------> Port B <----------------------------------------*/
/************************************************************************************/
/* ---------------------------> Direction configuration <---------------------------*/
/************************************************************************************/


	DIO_Register_DDRB = CONC_8BIT(DIO_u8_PIN8_INIT_DIR ,  DIO_u8_PIN9_INIT_DIR,
								  DIO_u8_PIN10_INIT_DIR, DIO_u8_PIN11_INIT_DIR,
								  DIO_u8_PIN12_INIT_DIR, DIO_u8_PIN13_INIT_DIR,
								  DIO_u8_PIN14_INIT_DIR, DIO_u8_PIN15_INIT_DIR);

/************************************************************************************/
/* --------------------------------> PORT configuration <---------------------------*/
/************************************************************************************/

	DIO_Register_PORTB = CONC_8BIT(DIO_u8_PIN8_INIT_PORT_VAL ,  DIO_u8_PIN9_INIT_PORT_VAL,
								   DIO_u8_PIN10_INIT_PORT_VAL, DIO_u8_PIN11_INIT_PORT_VAL,
								   DIO_u8_PIN12_INIT_PORT_VAL, DIO_u8_PIN13_INIT_PORT_VAL,
								   DIO_u8_PIN14_INIT_PORT_VAL, DIO_u8_PIN15_INIT_PORT_VAL);

/************************************************************************************/
/* --------------------------------> PIN configuration <----------------------------*/
/************************************************************************************/

	DIO_Register_PINB = CONC_8BIT(DIO_u8_PIN8_INIT_PIN_VAL ,  DIO_u8_PIN9_INIT_PIN_VAL,
								  DIO_u8_PIN10_INIT_PIN_VAL, DIO_u8_PIN11_INIT_PIN_VAL,
								  DIO_u8_PIN12_INIT_PIN_VAL, DIO_u8_PIN13_INIT_PIN_VAL,
								  DIO_u8_PIN14_INIT_PIN_VAL, DIO_u8_PIN15_INIT_PIN_VAL);


/************************************************************************************/
/* -------------------------------> Port C <----------------------------------------*/
/************************************************************************************/
/* ---------------------------> Direction configuration <---------------------------*/
/************************************************************************************/

	DIO_Register_DDRC = CONC_8BIT(DIO_u8_PIN16_INIT_DIR,  DIO_u8_PIN17_INIT_DIR,
								  DIO_u8_PIN18_INIT_DIR,  DIO_u8_PIN19_INIT_DIR,
								  DIO_u8_PIN20_INIT_DIR,  DIO_u8_PIN21_INIT_DIR,
								  DIO_u8_PIN22_INIT_DIR,  DIO_u8_PIN23_INIT_DIR);

	DIO_Register_PORTC = CONC_8BIT(DIO_u8_PIN16_INIT_PORT_VAL,  DIO_u8_PIN17_INIT_PORT_VAL,
								  DIO_u8_PIN18_INIT_PORT_VAL,  DIO_u8_PIN19_INIT_PORT_VAL,
								  DIO_u8_PIN20_INIT_PORT_VAL,  DIO_u8_PIN21_INIT_PORT_VAL,
								  DIO_u8_PIN22_INIT_PORT_VAL,  DIO_u8_PIN23_INIT_PORT_VAL);

	DIO_Register_PINC = CONC_8BIT(DIO_u8_PIN16_INIT_PIN_VAL,  DIO_u8_PIN17_INIT_PIN_VAL,
								  DIO_u8_PIN18_INIT_PIN_VAL,  DIO_u8_PIN19_INIT_PIN_VAL,
								  DIO_u8_PIN20_INIT_PIN_VAL,  DIO_u8_PIN21_INIT_PIN_VAL,
								  DIO_u8_PIN22_INIT_PIN_VAL,  DIO_u8_PIN23_INIT_PIN_VAL);


/************************************************************************************/
/* ---------------------------> Direction configuration <---------------------------*/
/************************************************************************************/

/* -------------------------------> Port D <----------------------------------------*/
	DIO_Register_DDRD = CONC_8BIT(DIO_u8_PIN24_INIT_DIR,  DIO_u8_PIN25_INIT_DIR,
								  DIO_u8_PIN26_INIT_DIR,  DIO_u8_PIN27_INIT_DIR,
								  DIO_u8_PIN28_INIT_DIR,  DIO_u8_PIN29_INIT_DIR,
								  DIO_u8_PIN30_INIT_DIR,  DIO_u8_PIN31_INIT_DIR);

/************************************************************************************/
/* --------------------------------> PORT configuration <---------------------------*/
/************************************************************************************/

	DIO_Register_PORTD = CONC_8BIT(DIO_u8_PIN24_INIT_PORT_VAL,  DIO_u8_PIN25_INIT_PORT_VAL,
								  DIO_u8_PIN26_INIT_PORT_VAL,  DIO_u8_PIN27_INIT_PORT_VAL,
								  DIO_u8_PIN28_INIT_PORT_VAL,  DIO_u8_PIN29_INIT_PORT_VAL,
								  DIO_u8_PIN30_INIT_PORT_VAL,  DIO_u8_PIN31_INIT_PORT_VAL);

/************************************************************************************/
/* --------------------------------> PIN configuration <----------------------------*/
/************************************************************************************/

	DIO_Register_PIND = CONC_8BIT(DIO_u8_PIN24_INIT_PIN_VAL,  DIO_u8_PIN25_INIT_PIN_VAL,
								  DIO_u8_PIN26_INIT_PIN_VAL,  DIO_u8_PIN27_INIT_PIN_VAL,
								  DIO_u8_PIN28_INIT_PIN_VAL,  DIO_u8_PIN29_INIT_PIN_VAL,
								  DIO_u8_PIN30_INIT_PIN_VAL,  DIO_u8_PIN31_INIT_PIN_VAL);

/************************************************************************************/

/************************************************************************************/
/* -------------------------> Validating configuration <----------------------------*/
/************************************************************************************/

#if (DIO_u8_PIN0_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN0_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 0 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN0_INIT_VALUE
        #define DIO_PIN0_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif

#if (DIO_u8_PIN1_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN1_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 1 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN1_INIT_VALUE
        #define DIO_PIN1_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN2_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN2_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 2 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN2_INIT_VALUE
        #define DIO_PIN2_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN3_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN3_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 3 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN3_INIT_VALUE
        #define DIO_PIN3_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN4_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN4_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 4 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN4_INIT_VALUE
        #define DIO_PIN4_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN5_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN5_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 5 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN5_INIT_VALUE
        #define DIO_PIN5_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN6_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN6_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 6 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN6_INIT_VALUE
        #define DIO_PIN6_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN7_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN7_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 7 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN7_INIT_VALUE
        #define DIO_PIN7_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN8_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN8_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 8 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN8_INIT_VALUE
        #define DIO_PIN8_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN9_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN9_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 9 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN9_INIT_VALUE
        #define DIO_PIN9_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN10_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN10_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 10 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN10_INIT_VALUE
        #define DIO_PIN10_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN11_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN11_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 11 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN11_INIT_VALUE
        #define DIO_PIN11_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN12_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN12_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 12 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN12_INIT_VALUE
        #define DIO_PIN12_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN13_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN13_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 13 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN13_INIT_VALUE
        #define DIO_PIN13_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN14_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN14_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 14 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN14_INIT_VALUE
        #define DIO_PIN14_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN15_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN15_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 15 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN15_INIT_VALUE
        #define DIO_PIN15_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif



#if (DIO_u8_PIN16_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN16_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 16 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN16_INIT_VALUE
        #define DIO_PIN16_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN17_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN17_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 17 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN17_INIT_VALUE
        #define DIO_PIN17_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN18_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN18_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 18 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN18_INIT_VALUE
        #define DIO_PIN18_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN19_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN19_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 19 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN19_INIT_VALUE
        #define DIO_PIN19_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN20_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN20_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 20 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN20_INIT_VALUE
        #define DIO_PIN20_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif

#if (DIO_u8_PIN21_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN21_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 21 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN21_INIT_VALUE
        #define DIO_PIN21_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN22_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN22_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 22 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN22_INIT_VALUE
        #define DIO_PIN22_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN23_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN23_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 23 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN23_INIT_VALUE
        #define DIO_PIN23_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN24_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN24_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 24 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN24_INIT_VALUE
        #define DIO_PIN24_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN25_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN25_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 25 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN25_INIT_VALUE
        #define DIO_PIN25_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN26_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN26_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 26 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN26_INIT_VALUE
        #define DIO_PIN26_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN27_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN27_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 27 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN27_INIT_VALUE
        #define DIO_PIN27_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN28_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN28_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 28 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN28_INIT_VALUE
        #define DIO_PIN28_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN29_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN29_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 29 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN29_INIT_VALUE
        #define DIO_PIN29_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN30_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN30_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 30 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN30_INIT_VALUE
        #define DIO_PIN30_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif


#if (DIO_u8_PIN31_INIT_DIR == DIO_PIN_INIT_DIR_INPUT) && (DIO_PIN31_INIT_VALUE == DIO_PIN_INIT_VAL_HIGH)
        #warning "PIN 31 is configured as input and default value is high, Corrected to LOW"
        #undef  DIO_PIN31_INIT_VALUE
        #define DIO_PIN31_INIT_VALUE   DIO_PIN_INIT_VAL_LOW
      #endif

/************************************************************************************/

}

/************************************************************************************/
/* Name: 1. DIO_u8SetPinDirection											     	*/
/* Description: Set pin direction													*/
/* Inputs:  -> Pin number (copy_u8PinNB) (ranges from 0 -> 31)						*/
/*          -> Direction (copy_u8Direction) (either 0 for input or 1 for output)	*/
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8SetPinDirection(u8 copy_u8PinNB, u8 copy_u8Direction)
{
/*===========================>> Local variables <<==================================*/

	u8 local_u8Error  = STD_ERROR_OK; /* ----> This is used as a return value       */


	/* validates the input if it's more than maximum number of pins					*/

	if(copy_u8PinNB < DIO_MAXPINNB)
	{
		switch (copy_u8Direction)
		{
			case DIO_PIN_INPUT:
				if((copy_u8PinNB >= DIO_PIN0) && (copy_u8PinNB <= DIO_PIN7))
				{
					DIO_Register_DDRA = RESET_BIT(DIO_Register_DDRA, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN8) && (copy_u8PinNB <= DIO_PIN15))
				{
					DIO_Register_DDRB = RESET_BIT(DIO_Register_DDRB, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN16) && (copy_u8PinNB <= DIO_PIN23))
				{
					DIO_Register_DDRC = RESET_BIT(DIO_Register_DDRC, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN24) && (copy_u8PinNB <= DIO_PIN31))
				{
					DIO_Register_DDRD = RESET_BIT(DIO_Register_DDRD, copy_u8PinNB);
				}
				break;

			case DIO_PIN_OUTPUT:
				if((copy_u8PinNB >= DIO_PIN0) && (copy_u8PinNB <= DIO_PIN7))
				{
					DIO_Register_DDRA = SET_BIT(DIO_Register_DDRA, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN8) && (copy_u8PinNB <= DIO_PIN15))
				{
					DIO_Register_DDRB = SET_BIT(DIO_Register_DDRB, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN16) && (copy_u8PinNB <= DIO_PIN23))
				{
					DIO_Register_DDRC = SET_BIT(DIO_Register_DDRC, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN24) && (copy_u8PinNB <= DIO_PIN31))
				{
					DIO_Register_DDRD = SET_BIT(DIO_Register_DDRD, copy_u8PinNB);
				}
				break;

			default:
				local_u8Error = STD_ERROR_NOK;
				break;
		}
	}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}

/************************************************************************************/
/* Name: 2. DIO_u8SetPinValue											         	*/
/* Description: Set pin value    													*/
/* Inputs:  -> Pin number (copy_u8PinNB) (ranges from 0 -> 31)						*/
/*          -> Value (copy_u8Value) (either 0 or 1)	                                */
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8SetPinValue(u8 copy_u8PinNB, u8 copy_u8Value)
{
	/*Local variables*/
	u8 local_u8Error = STD_ERROR_OK;

	/* Validates the input to check whether the user enter the
	 * correct pin number, and whether he enters the right which
	 * is not bigger than upper limit.
	 */
	if(copy_u8PinNB < DIO_MAXPINNB)
	{
		switch(copy_u8Value)
		{
			case DIO_PIN_LOW:
				if((copy_u8PinNB >= DIO_PIN0) && (copy_u8PinNB <= DIO_PIN7))
				{
					DIO_Register_PORTA = RESET_BIT(DIO_Register_PORTA, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN8) && (copy_u8PinNB <= DIO_PIN15))
				{
					DIO_Register_PORTB = RESET_BIT(DIO_Register_PORTB, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN16) && (copy_u8PinNB <= DIO_PIN23))
				{
					DIO_Register_PORTC = RESET_BIT(DIO_Register_PORTC, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN24) && (copy_u8PinNB <= DIO_PIN31))
				{
					DIO_Register_PORTD = RESET_BIT(DIO_Register_PORTD, copy_u8PinNB);
				}
				break;

			case DIO_PIN_HIGH:
				if((copy_u8PinNB >= DIO_PIN0) && (copy_u8PinNB <= DIO_PIN7))
				{
					DIO_Register_PORTA = SET_BIT(DIO_Register_PORTA, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN8) && (copy_u8PinNB <= DIO_PIN15))
				{
					DIO_Register_PORTB = SET_BIT(DIO_Register_PORTB, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN16) && (copy_u8PinNB <= DIO_PIN23))
				{
					DIO_Register_PORTC = SET_BIT(DIO_Register_PORTC, copy_u8PinNB);
				}
				else if((copy_u8PinNB >= DIO_PIN24) && (copy_u8PinNB <= DIO_PIN31))
				{
					DIO_Register_PORTD = SET_BIT(DIO_Register_PORTD, copy_u8PinNB);
				}
				break;

			default:
				local_u8Error = STD_ERROR_NOK;
		}

	}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}

/************************************************************************************/
/* Name: 3. DIO_u8ReadPinValue											         	*/
/* Description: Read pin value    													*/
/* Inputs:  -> Pin number (copy_u8PinNB) (ranges from 0 -> 31)						*/
/*          -> Location (copy_u8Value)                        						*/
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8ReadPinValue(u8 copy_u8PinNB, u8 * copy_pu8Value)
{
	/*Local variables*/
	u8 local_u8Error = STD_ERROR_OK;

	if((copy_u8PinNB < DIO_MAXPINNB) && (copy_pu8Value != NULL))
	{
		if((copy_u8PinNB >= DIO_PIN0) && (copy_u8PinNB <= DIO_PIN7))
		{
			* copy_pu8Value = GET_BIT(DIO_Register_PINA, copy_u8PinNB);
		}
		else if((copy_u8PinNB >= DIO_PIN8) && (copy_u8PinNB <= DIO_PIN15))
		{
			* copy_pu8Value = GET_BIT(DIO_Register_PINB, copy_u8PinNB);
		}
		else if((copy_u8PinNB >= DIO_PIN16) && (copy_u8PinNB <= DIO_PIN23))
		{
			* copy_pu8Value = GET_BIT(DIO_Register_PINC, copy_u8PinNB);
		}
		else if((copy_u8PinNB >= DIO_PIN24) && (copy_u8PinNB <= DIO_PIN31))
		{
			* copy_pu8Value = GET_BIT(DIO_Register_PIND, copy_u8PinNB);
		}
		local_u8Error = STD_ERROR_OK;
	}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}

/************************************************************************************/
/*------------------------------>  PORT OPERATIONS   <------------------------------*/
/************************************************************************************/

/************************************************************************************/
/* Name: 1. DIO_u8SetPortDirethe 													*/
/* Description: Set Port value    													*/
/* Inputs:  -> Pin number (copy_u8PortNB) (ranges from 0 -> 3)						*/
/*          -> Location (copy_u8Value)                        						*/
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8SetPortDirection(u8 copy_u8PortNB, u8 copy_u8Direction)
{
	/*Local variables*/
	u8 local_u8Error = STD_ERROR_OK;

	if(copy_u8PortNB < DIO_MAXPORTNB)
	{
		switch(copy_u8Direction)
		{
			case DIO_PORT_INPUT:
				if(copy_u8PortNB == DIO_PORTA)
				{
					DIO_Register_DDRA = RESET_PORT(DIO_Register_DDRA);
				}
				else if(copy_u8PortNB == DIO_PORTB)
				{
					DIO_Register_DDRB = RESET_PORT(DIO_Register_DDRB);
				}
				else if(copy_u8PortNB == DIO_PORTC)
				{
					DIO_Register_DDRC = RESET_PORT(DIO_Register_DDRC);
				}
				else if(copy_u8PortNB == DIO_PORTD)
				{
					DIO_Register_DDRD = RESET_PORT(DIO_Register_DDRD);
				}
				break;

			case DIO_PORT_OUTPUT:
				switch (copy_u8PortNB)
				{
				case DIO_PORTA:
					DIO_Register_DDRA = SET_PORT(DIO_Register_DDRA);
					break;
				case DIO_PORTB:
					DIO_Register_DDRB = SET_PORT(DIO_Register_DDRB);
					break;
				case DIO_PORTC:
					DIO_Register_DDRC = SET_PORT(DIO_Register_DDRC);
					break;
				case DIO_PORTD:
					DIO_Register_DDRD = SET_PORT(DIO_Register_DDRD);
					break;
				}
				break;
			default:
				local_u8Error = STD_ERROR_NOK;
				break;
		}
	}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}

/************************************************************************************/
/* Name: 2. DIO_u8SetPortValue											         	*/
/* Description: Set port value    													*/
/* Inputs:  -> Pin number (copy_u8PortNB) (ranges from 0 -> 3)						*/
/*          -> Value (copy_u8Value) (from 0x00 till 0xFF)                           */
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8SetPortValue(u8 copy_u8PortNB, u8 copy_pu8Value)
{
	/*Local variables*/
	u8 local_u8Error = STD_ERROR_OK;

	if( copy_u8PortNB < DIO_MAXPORTNB )
	{
		switch(copy_pu8Value)
		{
			case DIO_PORT_LOW:
				if(copy_u8PortNB == DIO_PORTA)
				{
					DIO_Register_PORTA = RESET_PORT(DIO_Register_PORTA);
				}
				else if(copy_u8PortNB == DIO_PORTB)
				{
					DIO_Register_PORTB = RESET_PORT(DIO_Register_PORTB);
				}
				else if(copy_u8PortNB == DIO_PORTC)
				{
					DIO_Register_PORTC = RESET_PORT(DIO_Register_PORTC);
				}
				else if(copy_u8PortNB == DIO_PORTD)
				{
					DIO_Register_PORTD = RESET_PORT(DIO_Register_PORTD);
				}
				break;

			case DIO_PORT_OUTPUT:
				if(copy_u8PortNB == DIO_PORTA)
				{
					DIO_Register_PORTA = SET_PORT(DIO_Register_PORTA);
				}
				else if(copy_u8PortNB == DIO_PORTB)
				{
					DIO_Register_PORTB = SET_PORT(DIO_Register_PORTB);
				}
				else if(copy_u8PortNB == DIO_PORTC)
				{
					DIO_Register_PORTC = SET_PORT(DIO_Register_PORTC);
				}
				else if(copy_u8PortNB == DIO_PORTD)
				{
					DIO_Register_PORTD = SET_PORT(DIO_Register_PORTD);
				}
				break;

			case DIO_BYTE_VALUE_RANGE:
				if(copy_u8PortNB == DIO_PORTA)
				{
					DIO_Register_PORTA = ASSIGN_PORT(DIO_Register_PORTA, copy_pu8Value);
				}
				else if(copy_u8PortNB == DIO_PORTB)
				{
					DIO_Register_PORTB = ASSIGN_PORT(DIO_Register_PORTB, copy_pu8Value);
				}
				else if(copy_u8PortNB == DIO_PORTC)
				{
					DIO_Register_PORTC = ASSIGN_PORT(DIO_Register_PORTC, copy_pu8Value);
				}
				else if(copy_u8PortNB == DIO_PORTD)
				{
					DIO_Register_PORTD = ASSIGN_PORT(DIO_Register_PORTD, copy_pu8Value);
				}
				break;
			default:
				local_u8Error = STD_ERROR_NOK;
		}
	}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}


/************************************************************************************/
/* Name: 3. DIO_u8ReadPortValue											         	*/
/* Description: Read port value    													*/
/* Inputs:  -> Pin number (copy_u8PortNB) (ranges from 0 -> 3)						*/
/*          -> Location (* copy_pu8Value)                                           */
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 DIO_u8ReadPortValue(u8 copy_u8PortNB, u8 * copy_pu8Value)
{
	/*Local variables*/
	u8 local_u8Error = STD_ERROR_OK;

	if((copy_u8PortNB < DIO_MAXPINNB) && (copy_pu8Value != NULL))
		{
			if(copy_u8PortNB == DIO_PORTA)
			{
				GET_PORT(DIO_Register_PINA, * copy_pu8Value);
			}
			else if(copy_u8PortNB == DIO_PORTB)
			{
				GET_PORT(DIO_Register_PINB, * copy_pu8Value);
			}
			else if(copy_u8PortNB == DIO_PORTC)
			{
				GET_PORT(DIO_Register_PINC, * copy_pu8Value);
			}
			else if(copy_u8PortNB == DIO_PORTA)
			{
				GET_PORT(DIO_Register_PIND, * copy_pu8Value);
			}
			local_u8Error = STD_ERROR_OK;
		}
	else
	{
		local_u8Error = STD_ERROR_NOK;
	}

	return local_u8Error;
}
