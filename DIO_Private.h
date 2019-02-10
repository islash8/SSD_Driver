/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 08 FEB 2019                                                            */
/* Version : V01                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/*  This header file is used to define private macros and function headers that are	*/
/*  used in the DIO driver, the addresses included are obtained from ATmega32 		*/
/*  data-sheet																		*/
/************************************************************************************/


/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/************************************************************************************/

/************************************************************************************/
/* -------------------------> User defined macros <---------------------------------*/
/************************************************************************************/

#define DIO_MAXPINNB 	(u8)32	/* -> This is used for input validation             */
#define DIO_MAXPORTNB   (u8)4	/* -> This is used for input validation             */

#define DIO_PIN_INIT_DIR_OUTPUT 	1
#define DIO_PIN_INIT_DIR_INPUT 	    0

#define DIO_PIN_INIT_VAL_HIGH		1
#define DIO_PIN_INIT_VAL_LOW		0

#define DIO_BYTE_VALUE_RANGE		0x01 ... 0xFE

/************************************************************************************/



/************************************************************************************/
/* ---------------------------> PORT A Section <------------------------------------*/
/************************************************************************************/

/* ---------------------------> 1.DDRA Register<------------------------------------*/
/* -------------------------->> Byte Access    <<-----------------------------------*/
#define DIO_Register_DDRA             (((Register *)0x3A) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_DDRA_BIT0        (((Register *)0x3A) -> BitAccess.Bit0)
#define DIO_Register_DDRA_BIT1        (((Register *)0x3A) -> BitAccess.Bit1)
#define DIO_Register_DDRA_BIT2        (((Register *)0x3A) -> BitAccess.Bit2)
#define DIO_Register_DDRA_BIT3        (((Register *)0x3A) -> BitAccess.Bit3)
#define DIO_Register_DDRA_BIT4        (((Register *)0x3A) -> BitAccess.Bit4)
#define DIO_Register_DDRA_BIT5        (((Register *)0x3A) -> BitAccess.Bit5)
#define DIO_Register_DDRA_BIT6        (((Register *)0x3A) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 2.PORTA Register<-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PORTA            (((Register *)0x3B) -> ByteAccess)

/* --------------------->>> Bit Access      <<<-------------------------------------*/
#define DIO_Register_PORTA_BIT0        (((Register *)0x3B) -> BitAccess.Bit0)
#define DIO_Register_PORTA_BIT1        (((Register *)0x3B) -> BitAccess.Bit1)
#define DIO_Register_PORTA_BIT2        (((Register *)0x3B) -> BitAccess.Bit2)
#define DIO_Register_PORTA_BIT3        (((Register *)0x3B) -> BitAccess.Bit3)
#define DIO_Register_PORTA_BIT4        (((Register *)0x3B) -> BitAccess.Bit4)
#define DIO_Register_PORTA_BIT5        (((Register *)0x3B) -> BitAccess.Bit5)
#define DIO_Register_PORTA_BIT6        (((Register *)0x3B) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 3. PINA Register<-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PINA			  (((Register *)0x39) -> ByteAccess)

/* --------------------->>> Bit Access      <<<-------------------------------------*/
#define DIO_Register_PINA_BIT0        (((Register *)0x39) -> BitAccess.Bit0)
#define DIO_Register_PINA_BIT1        (((Register *)0x39) -> BitAccess.Bit1)
#define DIO_Register_PINA_BIT2        (((Register *)0x39) -> BitAccess.Bit2)
#define DIO_Register_PINA_BIT3        (((Register *)0x39) -> BitAccess.Bit3)
#define DIO_Register_PINA_BIT4        (((Register *)0x39) -> BitAccess.Bit4)
#define DIO_Register_PINA_BIT5        (((Register *)0x39) -> BitAccess.Bit5)
#define DIO_Register_PINA_BIT6        (((Register *)0x39) -> BitAccess.Bit6)

/************************************************************************************/



/************************************************************************************/
/* ---------------------------> PORT B Section <------------------------------------*/
/************************************************************************************/

/* ---------------------------> 1.DDRB Register<------------------------------------*/
/* -------------------------->> Byte Access    <<-----------------------------------*/
#define DIO_Register_DDRB             (((Register *)0x37) -> ByteAccess)

/* ------------------------->>> Bit Access     <<<----------------------------------*/
#define DIO_Register_DDRB_BIT0        (((Register *)0x37) -> BitAccess.Bit0)
#define DIO_Register_DDRB_BIT1        (((Register *)0x37) -> BitAccess.Bit1)
#define DIO_Register_DDRB_BIT2        (((Register *)0x37) -> BitAccess.Bit2)
#define DIO_Register_DDRB_BIT3        (((Register *)0x37) -> BitAccess.Bit3)
#define DIO_Register_DDRB_BIT4        (((Register *)0x37) -> BitAccess.Bit4)
#define DIO_Register_DDRB_BIT5        (((Register *)0x37) -> BitAccess.Bit5)
#define DIO_Register_DDRB_BIT6        (((Register *)0x37) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 2.PORTB Register<-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PORTB            (((Register *)0x38) -> ByteAccess)

/* ------------------------> Bit Access     <---------------------------------------*/
#define DIO_Register_PORTB_BIT0        (((Register *)0x38) -> BitAccess.Bit0)
#define DIO_Register_PORTB_BIT1        (((Register *)0x38) -> BitAccess.Bit1)
#define DIO_Register_PORTB_BIT2        (((Register *)0x38) -> BitAccess.Bit2)
#define DIO_Register_PORTB_BIT3        (((Register *)0x38) -> BitAccess.Bit3)
#define DIO_Register_PORTB_BIT4        (((Register *)0x38) -> BitAccess.Bit4)
#define DIO_Register_PORTB_BIT5        (((Register *)0x38) -> BitAccess.Bit5)
#define DIO_Register_PORTB_BIT6        (((Register *)0x38) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 3.PINB Register <-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PINB			  (((Register *)0x36) -> ByteAccess)

/* ------------------------> Bit Access     <---------------------------------------*/
#define DIO_Register_PINB_BIT0        (((Register *)0x36) -> BitAccess.Bit0)
#define DIO_Register_PINB_BIT1        (((Register *)0x36) -> BitAccess.Bit1)
#define DIO_Register_PINB_BIT2        (((Register *)0x36) -> BitAccess.Bit2)
#define DIO_Register_PINB_BIT3        (((Register *)0x36) -> BitAccess.Bit3)
#define DIO_Register_PINB_BIT4        (((Register *)0x36) -> BitAccess.Bit4)
#define DIO_Register_PINB_BIT5        (((Register *)0x36) -> BitAccess.Bit5)
#define DIO_Register_PINB_BIT6        (((Register *)0x36) -> BitAccess.Bit6)

/************************************************************************************/



/************************************************************************************/
/* ---------------------------> PORT C Section <------------------------------------*/
/************************************************************************************/

/* ---------------------------> 1.DDRC Register<------------------------------------*/
/* -------------------------->> Byte Access    <<-----------------------------------*/
#define DIO_Register_DDRC             (((Register *)0x34) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_DDRC_BIT0        (((Register *)0x34) -> BitAccess.Bit0)
#define DIO_Register_DDRC_BIT1        (((Register *)0x34) -> BitAccess.Bit1)
#define DIO_Register_DDRC_BIT2        (((Register *)0x34) -> BitAccess.Bit2)
#define DIO_Register_DDRC_BIT3        (((Register *)0x34) -> BitAccess.Bit3)
#define DIO_Register_DDRC_BIT4        (((Register *)0x34) -> BitAccess.Bit4)
#define DIO_Register_DDRC_BIT5        (((Register *)0x34) -> BitAccess.Bit5)
#define DIO_Register_DDRC_BIT6        (((Register *)0x34) -> BitAccess.Bit6)

/* -----------------------> 2.PORTC Register<-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PORTC            (((Register *)0x35) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_PORTC_BIT0        (((Register *)0x35) -> BitAccess.Bit0)
#define DIO_Register_PORTC_BIT1        (((Register *)0x35) -> BitAccess.Bit1)
#define DIO_Register_PORTC_BIT2        (((Register *)0x35) -> BitAccess.Bit2)
#define DIO_Register_PORTC_BIT3        (((Register *)0x35) -> BitAccess.Bit3)
#define DIO_Register_PORTC_BIT4        (((Register *)0x35) -> BitAccess.Bit4)
#define DIO_Register_PORTC_BIT5        (((Register *)0x35) -> BitAccess.Bit5)
#define DIO_Register_PORTC_BIT6        (((Register *)0x35) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 3.PINC Register <-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PINC			  (((Register *)0x33) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_PINC_BIT0        (((Register *)0x33) -> BitAccess.Bit0)
#define DIO_Register_PINC_BIT1        (((Register *)0x33) -> BitAccess.Bit1)
#define DIO_Register_PINC_BIT2        (((Register *)0x33) -> BitAccess.Bit2)
#define DIO_Register_PINC_BIT3        (((Register *)0x33) -> BitAccess.Bit3)
#define DIO_Register_PINC_BIT4        (((Register *)0x33) -> BitAccess.Bit4)
#define DIO_Register_PINC_BIT5        (((Register *)0x33) -> BitAccess.Bit5)
#define DIO_Register_PINC_BIT6        (((Register *)0x33) -> BitAccess.Bit6)


/************************************************************************************/



/************************************************************************************/
/* ---------------------------> PORT D Section <------------------------------------*/
/************************************************************************************/

/* ---------------------------> 1.DDRD Register<------------------------------------*/
/* -------------------------->> Byte Access    <<-----------------------------------*/
#define DIO_Register_DDRD             (((Register *)0x31) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_DDRD_BIT0        (((Register *)0x31) -> BitAccess.Bit0)
#define DIO_Register_DDRD_BIT1        (((Register *)0x31) -> BitAccess.Bit1)
#define DIO_Register_DDRD_BIT2        (((Register *)0x31) -> BitAccess.Bit2)
#define DIO_Register_DDRD_BIT3        (((Register *)0x31) -> BitAccess.Bit3)
#define DIO_Register_DDRD_BIT4        (((Register *)0x31) -> BitAccess.Bit4)
#define DIO_Register_DDRD_BIT5        (((Register *)0x31) -> BitAccess.Bit5)
#define DIO_Register_DDRD_BIT6        (((Register *)0x31) -> BitAccess.Bit6)

/* -----------------------> 2.PORTD Register<-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PORTD            (((Register *)0x32) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_PORTD_BIT0        (((Register *)0x32) -> BitAccess.Bit0)
#define DIO_Register_PORTD_BIT1        (((Register *)0x32) -> BitAccess.Bit1)
#define DIO_Register_PORTD_BIT2        (((Register *)0x32) -> BitAccess.Bit2)
#define DIO_Register_PORTD_BIT3        (((Register *)0x32) -> BitAccess.Bit3)
#define DIO_Register_PORTD_BIT4        (((Register *)0x32) -> BitAccess.Bit4)
#define DIO_Register_PORTD_BIT5        (((Register *)0x32) -> BitAccess.Bit5)
#define DIO_Register_PORTD_BIT6        (((Register *)0x32) -> BitAccess.Bit6)

/************************************************************************************/

/* -----------------------> 3.PIND Register <-------------------------------------- */
/* ---------------------->> Byte Access     <<--------------------------------------*/
#define DIO_Register_PIND			  (((Register *)0x30) -> ByteAccess)

/* ------------------------>>> Bit Access     <<<-----------------------------------*/
#define DIO_Register_PIND_BIT0        (((Register *)0x30) -> BitAccess.Bit0)
#define DIO_Register_PIND_BIT1        (((Register *)0x30) -> BitAccess.Bit1)
#define DIO_Register_PIND_BIT2        (((Register *)0x30) -> BitAccess.Bit2)
#define DIO_Register_PIND_BIT3        (((Register *)0x30) -> BitAccess.Bit3)
#define DIO_Register_PIND_BIT4        (((Register *)0x30) -> BitAccess.Bit4)
#define DIO_Register_PIND_BIT5        (((Register *)0x30) -> BitAccess.Bit5)
#define DIO_Register_PIND_BIT6        (((Register *)0x30) -> BitAccess.Bit6)

/************************************************************************************/


#endif /* DIO_PRIVATE_H_ */
