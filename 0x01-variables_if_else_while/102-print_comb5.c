#include <stdio.h>
/**
 * main - prints all possible combination of two-digit numbers
 * Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			for (k = i + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(k + '0');
			}
		}
	}
}

