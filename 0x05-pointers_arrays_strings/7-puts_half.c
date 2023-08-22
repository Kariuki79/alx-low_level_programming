#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: stoes the string
*/
void puts_half(char *str)
{
	int i;
	int length = 0;

	while(str[length] != '\0')
	{
		length++;
	}
	int start = ((length - 1) / 2);
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
