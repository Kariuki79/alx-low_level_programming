#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: stoes the string
*/
void puts_half(char *str)
{
	int length = string_length(str);

	int i;

	int start = (length - 1) /2;
	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
