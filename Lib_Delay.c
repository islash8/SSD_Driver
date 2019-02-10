/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 03 FEB 2019                                            */
/* Version : V02                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This a delay library used to provide API for delay in millisecond*/
/* and delay in microseconds.                                       */
/********************************************************************/


#include "STD_Types.h"
#include "Lib_Delay.h"

/********************************************************************/
/*  1. Delay in millisecond 									    */
/*  operation -> A busy waiting loop that creates a delay for       */
/*				 the given input value of time in milliseconds      */
/*  input 		-> Time value of delay -> copy_u16time              */
/*  output		-> N/A											    */
/********************************************************************/

void Lib_vDelayMs(u16 copy_u16time)
{

	/*--------------------------------------------------------------*/
	/* basically this functions contains 2 loops, an outer loop     */
	/* determines how many loop needed which is provided by user    */
	/* second inner loop is a loop that takes execution time of 1ms */
	/* so by looping on the inner loop, we can get the multiples of */
	/* 1ms 															*/
	/*--------------------------------------------------------------*/

	/*---------------------local variables--------------------------*/
	/* this variable is a counter for inside loop which runs for 1ms*/
	u32 Local_InsideLoopCounter;
	/* this variable is a counter for outer loop which creates		*/
	/* multiples of 1ms which will loop till it reaches the maximum */
	/* range which is provided by user using passed variable 		*/
	/* --> copy_u16time												*/
	u32 Local_CountNumber;
	/*--------------------------------------------------------------*/

	/*----------------------main implementation---------------------*/

	for (Local_CountNumber=NULL; Local_CountNumber < copy_u16time ; Local_CountNumber++)
	{
		/*----------------------------------------------------------*/
		/* outer loop which runs multiple of 1ms					*/
		/* -> lower limit: 0										*/
		/* -> upper limit: copy_u16time 						    */
		/*----------------------------------------------------------*/
		for(Local_InsideLoopCounter = NULL; Local_InsideLoopCounter < LIB_U8_UPPER_THRESHOLD ; Local_InsideLoopCounter++)
		{

		/*----------------------------------------------------------*/
		/* inner loop which operates fully for 1ms                  */
		/* -> lower limit: 0										*/
		/* -> upper limit: 208 (LIB_U8_UPPER_THRESHOLD				*/
		/*----------------------------------------------------------*/
			asm("nop");
			asm("nop");
			asm("nop");
			asm("nop");
		}
	}

}

/****************************************************************/
/*  2. Delay in microsecond 									*/
/*  operation -> A busy waiting loop that creates a delay for   */
/*				 the given input value of time in microseconds  */
/*  input 		-> Time value of delay                          */
/*  output		-> N/A											*/
/****************************************************************/
void Lib_vDelayUs(u16 copy_u16time)
{
    /*----------------------------------------------------------*/
	/* this formula is used to calculate T1, T2, T3, then       */
	/* then calculate the number of iterations needed to 		*/
	/* generate the required delay in microseconds              */
	/*----------------------------------------------------------*/

	u16 local_CountNumber = (copy_u16time - LIB_U8_TOTAL_CALCULATED) / LIB_U8_AVG_TIME_PER_ITERATION;

	for(;local_CountNumber > NULL; local_CountNumber--)
	{
			asm("nop");
	}
}
