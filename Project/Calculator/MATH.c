/*
 * MATH.c
 *
 *  Created on: Apr 26, 2023
 *      Author: 01116
 */
#include"MATH.h"

long int Pow (int x,int n)
{
    int i; /* Variable used in loop counter */
    int number = 1;

    for (i = 0; i < n; ++i){
        number *= x;
    }

    return(number);
}
