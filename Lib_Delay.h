/*
 * Lib_Delay.h
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#ifndef LIB_DELAY_H_
#define LIB_DELAY_H_

#define LIB_U8_TOTAL_CALCULATED 	   21U
#define LIB_U8_AVG_TIME_PER_ITERATION  15U
#define LIB_U8_UPPER_THRESHOLD         208U

void Lib_vDelayMs(u16 copy_u16time);
void delay_millisecond (u32 m_time);

#endif /* LIB_DELAY_H_ */
