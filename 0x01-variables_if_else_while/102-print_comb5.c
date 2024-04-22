#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints all possible combinations of two
 * digit numbers
 *
 * Return: (0) means sucessful execution
 */
int main(void)
{
	int a, b;

	putchar('0');
	putchar('0');

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(',');
			putchar(' ');

			putchar(a + '0');
			putchar(b + '0');
		}

	}
	putchar('\n');
	return (0);
}
