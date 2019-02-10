/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 01 FEB 2019                                                            */
/* Version : V03                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This file contains the DIO API prototypes and interfaces for external usage      */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/************************************************************************************/

/************************************************************************************/
/* ---------------------------> Macro Definitions <---------------------------------*/
/************************************************************************************/

#define DIO_PIN_OUTPUT 	(u8)1   /* -> This is used to set pin direction to output  */
#define DIO_PIN_INPUT 	(u8)0	/* -> This is used to set pin direction to input   */

#define DIO_PIN_HIGH    (u8)1	/* -> This is used to set pin value to high        */
#define DIO_PIN_LOW     (u8)0   /* -> This is used to set pin value to low         */

#define DIO_PORT_OUTPUT (u8)0xFF/* -> This is used to set the whole port as output */
#define DIO_PORT_INPUT  (u8)0x00/* -> This is used to set the whole port as input  */

#define DIO_PORT_HIGH   (u8)0xFF/* -> This is used to set the whole port as high   */
#define DIO_PORT_LOW    (u8)0x00/* -> This is used to set the whole port as low    */


/************************************************************************************/

/************************************************************************************/
/* ---------------------------> Pin Number Definitions <----------------------------*/
/************************************************************************************/

typedef enum
{
	DIO_PIN0, 	/* -----> PORTA.0 */
	DIO_PIN1, 	/* -----> PORTA.1 */
	DIO_PIN2, 	/* -----> PORTA.2 */
	DIO_PIN3, 	/* -----> PORTA.3 */
	DIO_PIN4, 	/* -----> PORTA.4 */
	DIO_PIN5, 	/* -----> PORTA.5 */
	DIO_PIN6, 	/* -----> PORTA.6 */
	DIO_PIN7, 	/* -----> PORTA.7 */
	DIO_PIN8, 	/* -----> PORTB.0 */
	DIO_PIN9, 	/* -----> PORTB.1 */
	DIO_PIN10,	/* -----> PORTB.2 */
	DIO_PIN11,	/* -----> PORTB.3 */
	DIO_PIN12,	/* -----> PORTB.4 */
	DIO_PIN13,	/* -----> PORTB.5 */
	DIO_PIN14,	/* -----> PORTB.6 */
	DIO_PIN15,	/* -----> PORTB.7 */
	DIO_PIN16,	/* -----> PORTC.0 */
	DIO_PIN17,	/* -----> PORTC.1 */
	DIO_PIN18,	/* -----> PORTC.2 */
	DIO_PIN19,	/* -----> PORTC.3 */
	DIO_PIN20,	/* -----> PORTC.4 */
	DIO_PIN21,	/* -----> PORTC.5 */
	DIO_PIN22,	/* -----> PORTC.6 */
	DIO_PIN23,	/* -----> PORTC.7 */
	DIO_PIN24,	/* -----> PORTD.0 */
	DIO_PIN25,	/* -----> PORTD.1 */
	DIO_PIN26,	/* -----> PORTD.2 */
	DIO_PIN27,	/* -----> PORTD.3 */
	DIO_PIN28,	/* -----> PORTD.4 */
	DIO_PIN29,	/* -----> PORTD.5 */
	DIO_PIN30,	/* -----> PORTD.6 */
	DIO_PIN31,	/* -----> PORTD.7 */
}DIO_ENU_PIN;

/************************************************************************************/

/************************************************************************************/
/* --------------------------> PORT Number Definitions <----------------------------*/
/************************************************************************************/

typedef enum
{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}DIO_ENU_PORT;

/************************************************************************************/

/************************************************************************************/
/* ---------------------------> Function Prototypes    <----------------------------*/
/************************************************************************************/

void DIO_vInit(void);

/* ^ This function is used to initialize the DIO Driver with the values used inside */
/*   the configuration file --> DIO_Config.h                                        */

u8 DIO_u8SetPinDirection	(u8 u8PinNB, u8 u8Direction);
u8 DIO_u8SetPinValue		(u8 u8PinNB, u8 u8Value);
u8 DIO_u8ReadPinValue		(u8 u8PinNB, u8 * u8Value);

/* ^ These prototypes deal with individual pins operations                          */
/*   like -> 1. Setting Pin direction which writes on DDR register                  */
/*   	  -> 2. Setting Pin value which writes on PORT register                     */
/*        -> 3. Getting Pin value which reads from PIN register                     */

u8 DIO_u8SetPortDirection	(u8 u8PortNB, u8 u8Direction);
u8 DIO_u8SetPortValue		(u8 u8PortNB, u8 u8Value);
u8 DIO_u8ReadPortValue		(u8 u8PortNB, u8 * u8Value);

/* ^ These prototypes deal with individual pins operations                          */
/*   like -> 1. Setting Port direction which writes on DDR register                 */
/*   	  -> 2. Setting Port value which writes on PORT register                    */
/*        -> 3. Getting Port value which reads from PIN register                    */

/************************************************************************************/

#endif /* DIO_INTERFACE_H_ */
