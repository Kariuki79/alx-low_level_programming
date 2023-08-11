#include <stdio.h>
/**
* Main - a programme that prints all the numbers of base 16
* Return: 0
*/

int main(void)
{
	int hex;
	for (hex = 1; hex <= 9 ; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex<= 'f'; hex++)
	{
		putchar(hex);
	}
	return (0);
}
