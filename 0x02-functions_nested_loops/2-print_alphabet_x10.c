#include "main.h"

/**
 * 2-print_alphabet_x10.c - prints 10 times the alphabet
*/

void print_alphabet_x10(void)
{
	char b;
	int i = 0;

	while (i <= 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		
		_putchar('\n');

		i++;
	}
}
