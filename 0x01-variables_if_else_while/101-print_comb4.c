#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible differnt combinations
 * of two digits
 *
 * Return: (0)  means success
 */
int main(void)
{
	for (int a = 1; a <= 7; a++)
	{
		for (int b = (a + 1); b <= 8; b++)
		{
			for (int c = (b + 1); c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\0');
	return (0);
}
