#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: The number from which we get the last digit
 * Return: The value of the last digit
*/

int print_last_digit(int m)
{
	int b;

	b = m % 10;
	_putchar(b + '0');
	return (b);
}
