#include "main.h"
#include <stdio.h>

/**
 * get_bit - retrieves the value of a specific bit at a given index within
 * binary representation of a number
 * @index: unsigned integer representing the index of the bit to be
 * retrieved
 * @n: numbers to search
 * Return:  value of the extracted bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)

		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
