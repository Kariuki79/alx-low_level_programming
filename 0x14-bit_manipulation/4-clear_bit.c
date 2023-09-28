#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set the value of a bit
 * @index: index starting from 0
 * Return: 1 if it worked -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
