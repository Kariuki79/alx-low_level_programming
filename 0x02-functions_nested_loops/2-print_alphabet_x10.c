#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed
 * by a new line
 */
void print_alphabet_x10(void)
{
	char m;
	int q;

	for (q = 0; q < 10; q++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
