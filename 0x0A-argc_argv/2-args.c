#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s", argv[c]);
		printf("\n");
	}
	return (0);
}
