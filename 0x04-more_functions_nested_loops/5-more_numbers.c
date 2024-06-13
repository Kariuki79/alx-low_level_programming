#include <stdio.h>
#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers from 0 to 14
 * followed by a newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
