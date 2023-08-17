#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 apart from 2 and 4
 * @i: stores the numbers;
*/

void print_most_numbers(void)
{
	int i;
		
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2'|| i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
