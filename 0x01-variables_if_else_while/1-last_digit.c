#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry point of the program
 *
 * A program that assigns a random number to the variable
 *
 * Returns: 0 (successful execution)
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n % 10); /* modulus extracts the last digit an integer */

	printf("last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
