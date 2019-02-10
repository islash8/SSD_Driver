/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 01 FEB 2019                                                            */
/* Version : V02                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This file contains the initial configuration for the DIO initialization function */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/
#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

/************************************************************************************/


/************************************************************************************/
/* ---------------------------> Direction configuration <---------------------------*/
/************************************************************************************/

/* -------------------------------> Port A <----------------------------------------*/
#define DIO_u8_PIN0_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN1_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN2_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN3_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN4_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN5_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN6_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN7_INIT_DIR	DIO_PIN_INIT_DIR_INPUT

/* -------------------------------> Port B <----------------------------------------*/
#define DIO_u8_PIN8_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN9_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN10_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN11_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN12_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN13_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN14_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN15_INIT_DIR	DIO_PIN_INIT_DIR_INPUT

/* -------------------------------> Port C <----------------------------------------*/
#define DIO_u8_PIN16_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN17_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN18_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN19_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN20_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN21_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN22_INIT_DIR	DIO_PIN_INIT_DIR_INPUT
#define DIO_u8_PIN23_INIT_DIR	DIO_PIN_INIT_DIR_INPUT

/* -------------------------------> Port D <----------------------------------------*/
#define DIO_u8_PIN24_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN25_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN26_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN27_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN28_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN29_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN30_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT
#define DIO_u8_PIN31_INIT_DIR	DIO_PIN_INIT_DIR_OUTPUT


/************************************************************************************/
/* ---------------------------> PIN configuration <---------------------------------*/
/************************************************************************************/

/* -------------------------------> Port A <----------------------------------------*/
#define DIO_u8_PIN0_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN1_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN2_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN3_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN4_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN5_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN6_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN7_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port B <----------------------------------------*/
#define DIO_u8_PIN8_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN9_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN10_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN11_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN12_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN13_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN14_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN15_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port C <----------------------------------------*/
#define DIO_u8_PIN16_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN17_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN18_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN19_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN20_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN21_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN22_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN23_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port D <----------------------------------------*/
#define DIO_u8_PIN24_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN25_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN26_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN27_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN28_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN29_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN30_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN31_INIT_PIN_VAL	DIO_PIN_INIT_VAL_LOW


/************************************************************************************/
/* ---------------------------> PORT configuration <--------------------------------*/
/************************************************************************************/

/* -------------------------------> Port A <----------------------------------------*/
#define DIO_u8_PIN0_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN1_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN2_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN3_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN4_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN5_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN6_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN7_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port B <----------------------------------------*/
#define DIO_u8_PIN8_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN9_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN10_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN11_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN12_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN13_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN14_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN15_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port C <----------------------------------------*/
#define DIO_u8_PIN16_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN17_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN18_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN19_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN20_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN21_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN22_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW
#define DIO_u8_PIN23_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW

/* -------------------------------> Port D <----------------------------------------*/
#define DIO_u8_PIN24_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN25_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN26_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN27_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN28_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN29_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN30_INIT_PORT_VAL	DIO_PIN_INIT_VAL_HIGH
#define DIO_u8_PIN31_INIT_PORT_VAL	DIO_PIN_INIT_VAL_LOW

/************************************************************************************/

#endif /* DIO_CONFIG_H_ */
