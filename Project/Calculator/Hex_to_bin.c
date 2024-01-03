/******************************************************************************
 *
 * Module: hexadecimal to binary converter
 *
 * File Name:  Hex_to_dec.c
 *
 * Description: Source file for Hex 2 bin converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Hex_to_bin.h"



void Hex_to_bin()
{
	uint16 decimal_number;

	decimal_number=HEX_TO_DEC_Trial();
	Dec_to_bin(decimal_number);


}
