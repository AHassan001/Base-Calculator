/******************************************************************************
 *
 * Module: hexadecimal to decimal converter
 *
 * File Name:  Hex_To_Dec_Trial.c
 *
 * Description: Source file for Hex 2 dec converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Hex_To_Dec_Trial.h"

uint16 HEX_TO_DEC_Trial(void){

	    uint16 i = 0, val, len;

	   long long decimal = 0;

	    // Find the length of total number of hex digit
	    // finding the length of hexa decimal number
	    len = index_of_hex_number;
	    len--;

	    // for loop iterates the hexa decimal number digits
	    for (i = 0; hex[i] != '='; i++) {

	        // finding the equivalent decimal digit for each
	        // hexa decimal digit
	        if (hex[i] >= 0
	            && hex[i] <= 9) {
	            val = hex[i];
	        }
	        else if (hex[i] >= 'a'
	                 && hex[i] <= 'f') {
	            val = hex[i] - 97 + 10;
	        }
	        else if (hex[i] >= 'A'
	                 && hex[i] <= 'F') {
	            val = hex[i] - 65 + 10;
	        }

	        decimal += val * Pow(16, len);
	        len--;
	    }
	    return decimal;

}

