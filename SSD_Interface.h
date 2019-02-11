/*
 * SSD_Interface.h
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_


u8 SSD_u8SetValue(u8 copy_SSD_ModuleNum, u8 copy_SSD_ModuleValue);
u8 SSD_u8SetOn(u8 copy_u8SSDNum);
u8 SSD_u8SetOff(u8 copy_u8SSDNum);

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


#endif /* SSD_INTERFACE_H_ */
