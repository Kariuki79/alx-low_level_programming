#include "main.h"
/**
 * puts2 -prints every other character of a string
 * @str
 */

void puts2(char *str)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(s[m]);
		}
	}
}
