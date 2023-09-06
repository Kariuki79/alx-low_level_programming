#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0 success 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
