#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer using_putchar
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int a;
	/*
	 * if the number is negative, print the '-' sign and convert n
	 * to positive
	 */

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
	{
		a = n;
	}
	if (a == 0)
	{
		_putchar('0');
	}
	else
	{
		/* Recursively print the digits of the number */

		if (a / 10 != 0)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
	}
}
