/******************************************************************************
 *
 * Module: Decimal to octal converter
 *
 * File Name: Dec_to_oct.c
 *
 * Description: Source file for Dec 2 oct converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include "Dec_to_oct.h"

void Dec_to_oct(uint16 number)
{
	index_of_octal_number=0;

    while (number > 0) {
    	Octal_number[index_of_octal_number] = number % 8;
        number = number / 8;
        index_of_octal_number++;
    }


}
