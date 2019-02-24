/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 24 FEB 2019                                                            */
/* Version : V03                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This file contains the SSD API prototypes and interfaces for external usage      */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

/************************************************************************************/

/************************************************************************************/
/* Name: 1. SSD_u8SetValue										     	            */
/* Description: Setting value on Seven segment dispaly								*/
/* Inputs:  -> copy_SSD_ModuleNum (module number of seven segment display)			*/
/* 			-> copy_SSD_ModuleValue (the value wanted to be displayed on seven seg.)*/
/* Outputs: -> local_u8ErrorStatus (error flag to return type of error)	   			*/
/************************************************************************************/

u8 SSD_u8SetValue(u8 copy_SSD_ModuleNum, u8 copy_SSD_ModuleValue);

/************************************************************************************/
/* Name: 2. SSD_u8SetOn											     	            */
/* Description: Turning on seven segement display									*/
/* Inputs:  -> copy_u8SSDNum (module number of seven segment display)				*/
/* Outputs: -> local_u8ErrorStatus (error flag to return type of error)	   			*/
/************************************************************************************/

u8 SSD_u8SetOn(u8 copy_u8SSDNum);

/************************************************************************************/
/* Name: 3. SSD_u8SetOff										     	            */
/* Description: Turning off seven segement display									*/
/* Inputs:  -> copy_u8SSDNum (module number of seven segment display)				*/
/* Outputs: -> local_u8ErrorStatus (error flag to return type of error)	   			*/
/************************************************************************************/

u8 SSD_u8SetOff(u8 copy_u8SSDNum);

/* some global defined macros to be used in application layer						*/

#define SSD_MODULE1				(u8)0
#define SSD_MODULE2				(u8)1
#define SSD_MODULE3				(u8)2
#define SSD_MODULE4				(u8)3


#define SSD_u8_NUMBER_ZERO  	(u8)0
#define SSD_u8_NUMBER_ONE  		(u8)1
#define SSD_u8_NUMBER_TWO  		(u8)2
#define SSD_u8_NUMBER_THREE  	(u8)3
#define SSD_u8_NUMBER_FOUR  	(u8)4
#define SSD_u8_NUMBER_FIVE  	(u8)5
#define SSD_u8_NUMBER_SIX  		(u8)6
#define SSD_u8_NUMBER_SEVEN 	(u8)7
#define SSD_u8_NUMBER_EIGHT  	(u8)8
#define SSD_u8_NUMBER_NINE  	(u8)9
#define SSD_u8_OFF			 	(u8)10

/************************************************************************************/

#endif /* SSD_INTERFACE_H_ */
