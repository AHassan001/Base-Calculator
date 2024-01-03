/******************************************************************************
 *
 * Module: octal to hexadecimal converter
 *
 * File Name:  Oct_to_Hex.c
 *
 * Description: Source file for oct 2 Hex converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Oct_to_Hex.h"


void oct_to_hex (uint16 oct_num)
{
	uint16  dec_num = 0;

    dec_num = Oct_to_dec(oct_num);
    Dec_to_Hex(dec_num);


}
