#include <stdio.h>

/**
 * main - prints the program's name
 *
 * @argc: Argument count (unused)
 *
 * @argv: Array of arguments, where argv[0] is the program's name
 *
 * Return: Always 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
