#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: prints natural numbers from n
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
			{
				if ( n == 98)
				{
					printf("%d", n);
					printf("\n");
					break;
				}
				else 
				{
					printf("%d, ", n);
				}
			}
		}
		else
		{
			for (; n >= 98; n--)
			{
				if (n == 98)
				{
					printf("%d", n);
					printf("\n");
					break;
				}
				else
				{
					printf("%d, ", n);
				}
			}
		}
}
