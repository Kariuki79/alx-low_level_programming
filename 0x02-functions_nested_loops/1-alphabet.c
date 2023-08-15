#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 * Return: 0
*/

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}

	_putchar('\n');
}
