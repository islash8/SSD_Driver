/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 01 FEB 2019                                            */
/* Version : V01                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This is a library that contains macros for bit, nipple and port  */
/* operations, like setting, resetting and shifting 				*/
/********************************************************************/

#ifndef LIB_BIT_OPERATIONS_H_
#define LIB_IT_OPERATIONS_H_

/**************************************************************/
/*  This header file is used to do some bit operations        */
/*  there are many operations: set bit, reset bit, toggle     */
/*  assign bit, get bit.                                      */
/*  Also there are some Nibble operations, like:			  */
/*  Set high or low nibble, reset high or low nibble, toggle  */
/*  high or low nibble.										  */
/**************************************************************/

/*======================Guard Section=========================*/

/**************************************************************/
/*  This is used as a guard format, in order not to define    */
/*  this header file more than once.                          */
/*  Checks if BIT_CALC_H is not defined before, if not        */
/*  it defines it, and includes the bit operations. 		  */
/**************************************************************/

/*======================MACROS Section========================*/

#define  HIGH_NIBBLE    0xF0
#define  LOW_NIBBLE     0x0F
#define  LOW_VALUE      0x00
#define  HIGH_VALUE     0xFF
#define  NUMBER_OF_BITS 8
#define  BIT0			0x01
#define  BIT1			0x02
#define  BIT2			0x04
#define  BIT3           0x08
#define  BIT4           0x10
#define  BIT5           0x20
#define  BIT6           0x40
#define  BIT7           0x80
/*===================Shifted number Section===================*/

/**************************************************************/
/*  We define a look up table to access the shifted number    */
/*  directly without the need of shifting it.                 */
/*  Then we are expected to call it using LOOK_UP_TABLE macro */
/*  input: bit number we want to manipulate         		  */
/**************************************************************/

static const char shiftedNumber[NUMBER_OF_BITS] \
= {BIT0, BIT1, BIT2, BIT3, BIT4, BIT5, BIT6, BIT7};
#define  LOOK_UP_TABLE(bit_number) \
shiftedNumber[bit_number]

/*=====================Bit manipulation Section===============*/

/**************************************************************/
/*  1. Set bit operation:										*/
/*  operation -> Variable is OR-ed with a prestored shifted		*/
/*				 value, which is called by giving the bit	    */
/*				 number 										*/
/*  input 		-> Variable, bit number needed to change        */
/*  output		-> The new value of the variable after 			*/
/*   			   manipulation 								*/
/*  note 		-> The macro doesn't store in the variable 		*/
/*				   itself so it expects a variable to store		*/
/*				   the result									*/
/*  Example	  -> x = 0x00 --> x = SET_BIT(x,0) --> x = 0x01 	*/
/**************************************************************/

#define  SET_BIT(variable, bit_number) \
		 ((variable) | (LOOK_UP_TABLE(bit_number%NUMBER_OF_BITS)))

/**************************************************************/
/*  2. Reset bit operation:										*/
/*  operation -> Variable is AND-ed with a prestored shifted	*/
/*				 value, which is called by giving the bit	    */
/*				 number             							*/
/*  input 		-> Variable, bit number needed to change        */
/*  output		-> The new value of the variable after 			*/
/*   			   manipulation 								*/
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result      							*/
/*  Example	  -> x = 0xff --> x = RESET_BIT(x,0) --> x = 0xfe   */
/**************************************************************/

#define  RESET_BIT(variable, bit_number) \
		 ((variable)& ~(LOOK_UP_TABLE(bit_number%NUMBER_OF_BITS)))

/**************************************************************/
/*  3. Toggle bit operation:									*/
/*  operation -> Variable is XOR-ed with a prestored shifted	*/
/*				 value, which is called by giving the bit	    */
/*				 number											*/
/*  input 		-> Variable, bit number needed to change        */
/*  output		-> The new value of the variable after 			*/
/*   			   manipulation 								*/
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store   */
/*					 the result									*/
/*  Example	  -> x = 0xfe --> x = TOGGLE_BIT(x,0)--> x = 0xff   */
/**************************************************************/

#define  TOGGLE_BIT(variable, bit_number) \
		 ((variable) ^ (LOOK_UP_TABLE(bit_number)))

/**************************************************************/
/*  4. Assign bit operation:								    */
/*  operation -> Variable is passed with a value, the value     */
/*				 you need to assign is checked if it's 1 	    */
/*               or not, if it's 1, it does the same operation  */
/*				 as set bit. if other (0 or anything else),	    */
/*               it resets the bit.							    */
/*  input 		-> Variable, bit number needed to change, value */
/*				   you need to assign.							*/
/*  output		-> The new value of the variable after 			*/
/*   			   manipulation 							    */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store   */
/*					 the result									*/
/*  Example	  -> x = fe -> x = ASSIGN_BIT(x, 0, 1) -> x = ff    */
/**************************************************************/

#define  ASSIGN_BIT(variable, bit_number, value) \
((value) == 1) ? \
((variable) | (LOOK_UP_TABLE(bit_number))) \
: ((variable) & ~(LOOK_UP_TABLE(bit_number)))

/**************************************************************/
/*  4. Get bit operation:									    */
/*  operation -> Variable is passed with bit number you want    */
/*				 the value of. It gets anded with that number	*/
/*               and it returns back the value of that bit.     */
/*  input 		-> Variable, bit number needed to change, value */
/*				   you need to get.								*/
/*  output		-> The bit value from the variable the user		*/
/*   			   entered										*/
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store   */
/*					 the result								    */
/*  Example	  -> x = 0x01 -> x = GET_BIT(x, 1) -> x = 0x00      */
/**************************************************************/

#define  GET_BIT(variable, bit_number) \
		 ((variable) & (LOOK_UP_TABLE(bit_number)))

/*===================Nibble operation Section=================*/

/**************************************************************/
/*  1. Set high nibble operation:							    */
/*  operation -> Variable is taken and get OR-ed with 0xF0		*/
/*				 which is predefined using HIGH_NIBBLE macro    */
/*  input 		-> Variable needed to be set its high nibble  	*/
/*  output		-> The new value after setting the high nibble  */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result							        */
/*  Example	  -> x = 0x00 -> x = SET_H_NIBBLE(x) -> x = 0xF0    */
/**************************************************************/

#define  SET_H_NIBBLE(variable) \
		 ((variable) | (HIGH_NIBBLE))
/**************************************************************/
/*  2. Set low nibble operation:								*/
/*  operation -> Variable is taken and get OR-ed with 0x0F		*/
/*				 which is predefined using LOW_NIBBLE macro     */
/*  input 		-> Variable needed to be set its low nibble    	*/
/*  output		-> The new value after setting the low nibble   */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result									*/
/*  Example	  -> x = 0x00 -> x = SET_L_NIBBLE(x) -> x = 0x0F    */
/**************************************************************/

#define  SET_L_NIBBLE(variable) \
		 ((variable) | (LOW_NIBBLE))

/**************************************************************/
/*  3. Reset high nibble operation:								*/
/*  operation -> Variable is taken and get AND-ed with 0x0F		*/
/*				 which is predefined using LOW_NIBBLE macro     */
/*  input 		-> Variable needed to be reset its high nibble 	*/
/*  output		-> The new value after resetting the high nibble*/
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store   */
/*					 the result							        */
/*  Example	  -> x = 0xF0 -> x = RESET_H_NIBBLE(x) -> x = 0x00  */
/**************************************************************/

#define  RESET_H_NIBBLE(variable) \
		 ((variable) & (LOW_NIBBLE))

/**************************************************************/
/*  4. Reset low nibble operation:								*/
/*  operation -> Variable is taken and get AND-ed with 0xF0		*/
/*				 which is predefined using HIGH_NIBBLE macro    */
/*  input 		-> Variable needed to be reset its low nibble 	*/
/*  output		-> The new value after resetting the low nibble */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result							        */
/*  Example	  -> x = 0xFF -> x = RESET_L_NIBBLE(x) -> x = 0xF0  */
/**************************************************************/

#define  RESET_L_NIBBLE(variable) \
		 ((variable) & (HIGH_NIBBLE))

/**************************************************************/
/*  5. Toggle high nibble operation:							*/
/*  operation -> Variable is taken and get XOR-ed with 0xF0		*/
/*				 which is predefined using HIGH_NIBBLE macro    */
/*  input 		-> Variable needed to be toggle its high nibble	*/
/*  output		-> The new value after toggling the high nibble */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result							        */
/*  Example	  -> x = 0xF0 -> x = TOGGLE_H_NIBBLE(x)-> x = 0x00  */
/**************************************************************/

#define  TOGGLE_H_NIBBLE(variable) \
		 ((variable) ^ (HIGH_NIBBLE))

/**************************************************************/
/*  6. Toggle low nibble operation:								*/
/*  operation -> Variable is taken and get XOR-ed with 0x0F		*/
/*				 which is predefined using LOW_NIBBLE macro     */
/*  input 		-> Variable needed to be toggle its low nibble	*/
/*  output		-> The new value after toggling the low nibble  */
/*  note 		 --> The macro doesn't store in the variable 	*/
/*					 itself so it expects a variable to store	*/
/*					 the result									*/
/*  Example	  -> x = 0xF0 -> x = TOGGLE_L_NIBBLE(x)-> x = 0xFF  */
/**************************************************************/

#define  TOGGLE_L_NIBBLE(variable) \
		 ((variable) ^ (LOW_NIBBLE))

/*====================PORT OPERATIONS===========================*/

/**************************************************************/
/*  1. Assign whole byte operation:							    */
/*  operation -> value is taken and assigned directly		    */
/*				 to variable or the place provided to store it  */
/*  input 		-> Variable needed to be assigned and value  	*/
/*				   to be recorded								*/
/*  output		-> The output variable after assignment         */
/*  Example	  -> x = 0x00 -> ASSIGN_PORT(x, 0xFF)               */
/*            -> x = 0xFF                                       */
/**************************************************************/

#define  ASSIGN_PORT(variable, value) \
		 (value)

/**************************************************************/
/*  2. Get whole byte operation:							    */
/*  operation -> variable is taken and assigned directly		*/
/*				 to place provided                              */
/*  input 		-> Variable needed to be assigned and place  	*/
/*				   to store in  								*/
/*  output		-> The output place after assignment            */
/*  Example	  -> x = 0x01 -> GET_PORT(x, place) -> place = 0x01 */
/**************************************************************/

#define  GET_PORT(variable, place) \
		 ((place) = (variable))

/**************************************************************/
/*  3. Concatenate whole port:							        */
/*  operation -> The conc function-like macro goes to conc   	*/
/*				 helper, which will be later replaced by the    */
/*               the concatenated bits                          */
/*  input 		-> 7 bits, from b7 first, till b0 last          */
/*  output		-> the 8 bits concatenated                      */
/*  Example	  -> x = CONC_8BIT(1,1,1,1,0,0,0,0);				*/
/*            -> x = 0b11110000;                                */
/**************************************************************/
#define CONC_8BIT(b0, b1, b2, b3, b4, b5, b6, b7) \
		(CONC_HELPER(b0, b1, b2, b3, b4, b5, b6, b7))

#define CONC_HELPER(b0, b1, b2, b3, b4, b5, b6, b7) \
		(0b##b7##b6##b5##b4##b3##b2##b1##b0)

/**************************************************************/
/*  4. Set Port Value:							                */
/*  operation -> Set the value of Port to high                  */
/*  input 		-> variable port that needed to be set          */
/*  output		-> variable port after set                      */
/*  Example	  -> x = SET_PORT(x);				                */
/*            -> x = 0b1111 1111;                               */
/**************************************************************/
#define SET_PORT(x) (HIGH_VALUE)

/**************************************************************/
/*  4. Reset Port Value:							            */
/*  operation -> Set the value of Port to low                   */
/*  input 		-> variable port that needed to be reset        */
/*  output		-> variable port after reset                    */
/*  Example	  -> x = RESET_PORT(x);				                */
/*            -> x = 0b0000 0000;                               */
/**************************************************************/
#define RESET_PORT(x) (LOW_VALUE)
/*===============================================================*/

#endif /*LIB_BIT_OPERATIONS_H_ */
