/******************************************************************************
 *
 * Module: hexadecimal to octal converter
 *
 * File Name:  Hex_to_oct.c
 *
 * Description: Source file for Hex 2 Oct converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/
#include "Hex_to_oct.h"

void hex_to_oct(void)
{
	uint16 decimal_number;

	decimal_number = HEX_TO_DEC_Trial();
	Dec_to_oct(decimal_number);


}
