#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the program opcodes
 * @f: main function address
 * @d: bytes numbers to print
 *
 * Return: void
 */
void print_opcodes(char *f, int d)
{
	int m;

	for (m = 0; m < d; m++)
	{
		printf("%hhx", f[m]);
		if (m < d - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints its own main functions
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	d = atoi(argv[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, d);
	return (0);
}
