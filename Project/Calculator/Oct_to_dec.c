/******************************************************************************
 *
 * Module: octal to Decimal converter
 *
 * File Name:  Oct_to_dec.c
 *
 * Description: Source file for oct 2 Dec converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Oct_to_dec.h"

uint16 Oct_to_dec(uint16 oct_num)
{

    uint16 dec = 0;
    // Initializing baseValue value to 1, i.e 8^0
    uint16 baseValue = 1;
	uint16 last_digit;
	
    while (oct_num)
    {
        // Extracting last digit
         last_digit = oct_num % 10;
        // Multiplying last digit with appropriate
        // base value and adding it to decNum
        dec += last_digit * baseValue;
        baseValue = baseValue * 8;
        oct_num = oct_num / 10;
    }

    return dec;
}



  
