#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned long int count;

	r = n ^ m;
	for (count = 0; r > 0;)
	{
		if ((r & 1) == 1)
			count++;
		r = r >> 1;
	}

	return (count);
}
