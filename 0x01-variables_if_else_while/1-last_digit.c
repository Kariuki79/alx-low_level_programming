#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program generates a random number and determines
 * properties of its last digit.
 * Return:0 - Successful execution
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = (n % 10); /* modulus extracts the last digit an integer */

	printf("last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
