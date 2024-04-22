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
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = (a + 1); b <= 9; b++)
		{
			for (c = (b + 1); c <= 9; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}

					if (a == 7 && b == 8 && c == 9)
					{
						putchar('\n');
					}
				}
			}
		}
	}

	return (0);
}
