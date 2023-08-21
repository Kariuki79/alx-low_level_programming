#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer
 * Return: Nothing
*/

void _puts(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
