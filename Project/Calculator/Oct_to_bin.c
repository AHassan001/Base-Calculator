/******************************************************************************
 *
 * Module: octal to Binary converter
 *
 * File Name:  Oct_to_bin.c
 *
 * Description: Source file for oct 2 Bin converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Oct_to_bin.h"


void oct_to_bin(uint16 oct_num)
{
    uint16 dec_num = 0;

    dec_num = Oct_to_dec( oct_num);
	Dec_to_bin(dec_num);

}
