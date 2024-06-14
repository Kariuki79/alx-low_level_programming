#include <stdio.h>

int _putchar(char c);

/**
 * print_number - Prints an integer using_putchar
 * @n: The integer to print.
 */
void print_number(int n)
{
	/*
	 * if the number is negative, print the '-' sign and convert n
	 * to positive
	 */

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Recursively print the digits of the number */

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
