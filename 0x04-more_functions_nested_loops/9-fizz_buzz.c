#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 *
 * For multiples of three, print 'fizz' instead of the number.
 *
 * For multiples of five, print 'buzz' instead of the number.
 *
 * For mutiples of three and five, print 'fizzbuzz'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
			printf("FizzBuzz");
		else if (m % 3 == 0)
			printf("Fizz");
		else if (m % 5 == 0)
			printf("Buzz");
		else
			printf("%d", m);
		if (m < 100)
			printf(" ");
	}
	return (0);
}
