#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument that is count
 * @argv: pointer to array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
