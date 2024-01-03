/******************************************************************************
 *
 * Module: Binary to HexaDecimal converter
 *
 * File Name: Bin_to_hex.h
 *
 * Description: Header file for Bin 2 Hex converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#ifndef BIN_TO_HEX_H_
#define BIN_TO_HEX_H_

#include "./MCAL/std_types.h"

void Bin_to_hex(uint16 binnum);

extern uint8 index_of_hex_number;
extern uint16 hex[16];


#endif /* BIN_TO_HEX_H_ */
