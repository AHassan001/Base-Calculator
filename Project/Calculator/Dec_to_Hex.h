/******************************************************************************
 *
 * Module: Decimal to hexadecimal converter
 *
 * File Name: Dec_to_Hex.h
 *
 * Description: Header file for Dec 2 hex converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#ifndef DEC_TO_HEX_H_
#define DEC_TO_HEX_H_

#include "./MCAL/std_types.h"

  uint8 index_of_hex_number;
  uint16 hex[16];

#define no_of_bits 8


void Dec_to_Hex(uint16 number);

#endif /* DEC_TO_HEX_H_ */
