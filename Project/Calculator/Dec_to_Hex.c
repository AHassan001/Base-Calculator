/******************************************************************************
 *
 * Module: Decimal to hexadecimal converter
 *
 * File Name: Dec_to_Hex.c
 *
 * Description: Source file for Dec 2 hex converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Dec_to_Hex.h"

void Dec_to_Hex(uint16 number)
{
	 index_of_hex_number=0;
//    uint8 j=0;
//    uint16 hex[no_of_bits]; /*bcoz it contains characters A to F*/
//    uint16 hex_reversed[no_of_bits];

    while (number > 0) {
        switch (number % 16) {
        case 10:
            hex[index_of_hex_number] = 'A';
            break;
        case 11:
            hex[index_of_hex_number] = 'B';
            break;
        case 12:
            hex[index_of_hex_number] = 'C';
            break;
        case 13:
            hex[index_of_hex_number] = 'D';
            break;
        case 14:
            hex[index_of_hex_number] = 'E';
            break;
        case 15:
            hex[index_of_hex_number] = 'F';
            break;
        default:
            hex[index_of_hex_number] = (number % 16) + 0x30; /*converted into char value*/
        }
        number = number / 16;
        index_of_hex_number++;
    }

//    for (i = (index_of_hex_number - 1); i >= 0; i--)
//    {
//    	hex_reversed[j] = hex[i];
//    	j++;
//    }
//    return (uint16)hex_reversed;
}
