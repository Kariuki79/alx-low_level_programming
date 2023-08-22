#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: stoes the string
*/
void puts_half(char *str)
{
	int length = 0;
	int i;

	while(str[length] != '\0')
	{
		length++;
		str++;
	}
	str = ((length - 1) / 2);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
