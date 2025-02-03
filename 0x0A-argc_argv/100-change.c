#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)	/* validate argument count */
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);	/* convert input into integer */

	if (cents < 0)	/* if negative, print 0 */
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / denominations[i]; /* Count how many of this coins */
		cents %= denominations[i]; /* Update remaining cents */
	}

	printf("%d\n", coins);
	return (0);
}
