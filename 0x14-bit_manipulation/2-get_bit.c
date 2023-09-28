#include "main.h"
#include <stdio.h>

/**
 * get_bit - retrieves the value of a specific bit at a given index within
 * binary representation of a number
 * @index: unsigned integer representing the index of the bit to be
 * retrieved
 * Return:  value of the extracted bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	if (index >= (sizeof(unsigned long int) *8))
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	int bit = (n & mask) ? 1 : 0;

	return (bit);
}
