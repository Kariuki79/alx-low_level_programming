#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to calculate the factorial
 * Return: factorial of number @n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 indicating an error for negative n */
	}
	if (n == 0)
	{
		return (1);  /* A base case: factorial of 0 is 1 */
	}

	return (n * factorial(n - 1));
}
