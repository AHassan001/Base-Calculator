/******************************************************************************
 *
 * Module: Binary to Decimal converter
 *
 * File Name: Bin_Dec.c
 *
 * Description: Source file for Bin 2 Dec converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/


#include "Bin_to_dec.h"


uint16 Bin_to_dec(uint16 num)
{
	  int decimal_num = 0, base = 1, rem;

	    while ( num > 0)
	    {
	        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
	        decimal_num = decimal_num + rem * base;
	        num = num / 10; // divide the number with quotient
	        base = base * 2;
	    }

	    return decimal_num;

}

