#include <stdio.h>

/**
 * main - Prints the number of argumments passed into it.
 *
 * @argc: Argument count
 *
 * @argv: Argument vector (unused)
 *
 * Return: Always 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
