 /******************************************************************************
 *
 * Module: KEYPAD
 *
 * File Name: keypad.h
 *
 * Description: Header file for the Keypad driver
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "../MCAL/std_types.h"
#include "../MCAL/common_macros.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

/* Keypad configurations for number of rows and columns */
#define KEYPAD_NUM_COLS                  4
#define KEYPAD_NUM_ROWS                  4

/* Keypad Port Configurations */
#define KEYPAD_PORT_ID                   PORTC_ID

/*In case of keypad 3*4 we need 7 pins
 we may start from pin1 not pin 0 so we need to modifiy this 
start: PIN1_ID
end: PIN5_ID
*/
#define KEYPAD_FIRST_ROW_PIN_ID         PIN0_ID
#define KEYPAD_FIRST_COLUMN_PIN_ID      PIN4_ID

/* Keypad button logic configurations */
/*
in case of pull down :
 KEYPAD_BUTTON_PRESSED            LOGIC_HIGH
 KEYPAD_BUTTON_RELEASED           LOGIC_LOW
 
 in case of pull up :

*/
#define KEYPAD_BUTTON_PRESSED            LOGIC_LOW
#define KEYPAD_BUTTON_RELEASED           LOGIC_HIGH

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Get the Keypad pressed button
 */
uint8 KEYPAD_getPressedKey(void);

#endif /* KEYPAD_H_ */
