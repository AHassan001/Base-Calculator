/******************************************************************************
 *
 * Module: Binary to octal converter
 *
 * File Name: Bin_to_oct.c
 *
 * Description: Source file for Bin 2 Oct converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Bin_to_oct.h"

uint16 Bin_to_oct(uint16 binaryNumber)
{
	uint16 octalNumber = 0;
	uint16 i = 1;
	uint16 rem = 0;



    while (binaryNumber != 0) {
        rem = binaryNumber % 10;
        octalNumber = octalNumber + rem * i;

        i = i * 2;
        binaryNumber = binaryNumber / 10;
    }

    return octalNumber;
}



