/******************************************************************************
 *
 * Module: Decimal to octal converter
 *
 * File Name: Dec_to_oct.h
 *
 * Description: Header file for Dec 2 oct converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/


#ifndef DEC_TO_OCT_H_
#define DEC_TO_OCT_H_

#include "./MCAL/std_types.h"

uint8 index_of_octal_number;
uint16 Octal_number[16];


void Dec_to_oct(uint16 number);

#endif /* DEC_TO_OCT_H_ */
