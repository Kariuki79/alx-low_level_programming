#include <stdio.h>
/**
* main - a programme that prints all the numbers of base 16
* Return: 0
*/

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9' ; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	return (0);
}
