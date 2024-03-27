#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A progrma that prints all single digits of base 10 starting
 * from 0
 *
 * Return: 0 (Successful execution)
 */
int main(void)
{
	int base = 10; /* Change the value to the set base */
	int i; /* Declare `i` outside the loop */

	for (i = 0; i < base; i++)
	{
		printf("%d", i);
	}

	return (0);
}
