/******************************************************************************
 *
 * Module: Decimal to Binary converter
 *
 * File Name: Dec_to_bin.h
 *
 * Description: Header file for Dec 2 Bin converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/


#ifndef DEC_TO_BIN_H_
#define DEC_TO_BIN_H_

#include "./MCAL/std_types.h"

uint16 bin[16];
uint8 index_of_binary_num;


void Dec_to_bin(uint16 number);


#endif /* DEC_TO_BIN_H_ */
