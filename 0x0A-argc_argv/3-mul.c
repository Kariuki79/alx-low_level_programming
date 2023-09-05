#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of strings
 * Return: 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int a;
	int multi = 1;

	if (argc == 3)
	{
		for (a = 1; a < argc; a++)
		{
			multi = atoi(argv[a]) * multi;
		}
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
