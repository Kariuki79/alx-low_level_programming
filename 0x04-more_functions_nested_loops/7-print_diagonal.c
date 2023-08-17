#include "main.h"
/**
 * print_diagonal - draws line on the terminal
 * @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int i, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= n; r++)
		{
			if (r > 1)
			{
				for (i = 1; i <= r - 1; i++)
				{
					_putchar(' ');
				}
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
