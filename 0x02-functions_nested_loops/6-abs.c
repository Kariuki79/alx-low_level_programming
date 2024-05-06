#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @b: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int b)
{
	if (b < 0)

		return (-b);
		else
			return (b);
}
