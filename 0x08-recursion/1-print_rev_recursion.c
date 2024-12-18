#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);	/* move to the next character */
	_putchar(*s);	/* print the curent character after recursive call */
}
