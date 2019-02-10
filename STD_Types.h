/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 08 FEB 2019                                                            */
/* Version : V02                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This header file is used to define some standard some standard data types, in a  */
/*  predefined format.			                                                    */
/*  u: unsigned, s: signed, f: float, then followed by the number of bits it can    */
/*  store   																		*/
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/************************************************************************************/

/************************************************************************************/
/* -------------------------> User defined data types <-----------------------------*/
/************************************************************************************/

typedef unsigned char       u8; /* ----> unsigned 8 bits  */
typedef signed char         s8; /* ----> signed 8 bits    */

typedef unsigned short int u16; /* ----> unsigned 16 bits */
typedef signed short int   s16; /* ----> signed 16 bits   */

typedef unsigned long int  u32; /* ----> unsigned 32 bits */
typedef signed long int    s32; /* ----> signed 32 bits   */

typedef float              f32; /* ----> float 32 bits    */
typedef float              f64; /* ----> float 64 bits    */

/************************************************************************************/

/************************************************************************************/
/* -------------------------> User defined Macros     <-----------------------------*/
/************************************************************************************/

#define STD_ERROR_NOK     (u8)0        /* ----> This is used as a status flag    */
#define STD_ERROR_OK      (u8)1		   /* ----> This is used as a status flag    */

#define NULL      	  0    		   /* ----> This is used for initializing    */

#define STD_LOW	      (u8)0x00	   /* ----> This is used as a STD low value  */
#define STD_HIGH      (u8)0xFF	   /* ----> This is used as a STD high value */

typedef union {
	struct
	{
		u8 Bit0 : 1;
		u8 Bit1 : 1;
		u8 Bit2 : 1;
		u8 Bit3 : 1;
		u8 Bit4 : 1;
		u8 Bit5 : 1;
		u8 Bit6 : 1;
		u8 Bit7 : 1;
	}BitAccess;
	u8 ByteAccess;
}Register;

/* ^ This is used for ease of access for registers, where it can be accessed through */
/*   whole 8 bits at once, or it can be accessed each bit individually               */
/* Ex: Register x; ---> (x -> ByteAccess = 0xFF;) or (x -> BitAccess.Bit0 = 1);      */

#endif /* STD_TYPES_H_ */
