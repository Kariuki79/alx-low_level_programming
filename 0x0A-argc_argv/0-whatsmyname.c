#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments that is count
 * @argv: pointer of array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
