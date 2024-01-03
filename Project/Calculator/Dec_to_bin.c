 /******************************************************************************
 *
 * Module: Decimal to Binary converter
 *
 * File Name: Dec_to_bin.c
 *
 * Description: Source file for Dec 2 Bin converter
 *
 * Author: Number Converter Project authors
 *
 *******************************************************************************/

#include"Dec_to_bin.h"

void Dec_to_bin(uint16 number)
{
	index_of_binary_num=0;


	while(number>0)
	{
		bin[index_of_binary_num]=number%2;
		number=number/2;
		index_of_binary_num++;
	}

}


