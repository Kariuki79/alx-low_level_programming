#include "main.h"
#include <stdio.h>

/**
 * set_bit - an action that sets a specific bit in a binary
 * number to 1
 * @n: variable name that holds a numeric value. Also a pointer that
 * points a number to change.
 * @index: position or index of the bit to set in the binary representatation
 * of 'n'. Set to 1.
 * Return: 1 means sucess, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (index >= 64)
                return (-1);
        *n = ((1UL << index) | *n);
        return (1);
}
