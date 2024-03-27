#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that prints the lowercase alphabet in reverse,
 * followd by a new line
 *
 * Return: 0 means sucessful execution
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
