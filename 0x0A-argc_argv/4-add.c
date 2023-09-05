#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0 no number is passed 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
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