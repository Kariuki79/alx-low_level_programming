#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs operations
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int n1, n2, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(n1, n2);
	printf("%d\n", c);
	return (0);
}
