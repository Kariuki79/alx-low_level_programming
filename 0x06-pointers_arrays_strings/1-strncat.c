#include <stdio.h>
#include "main.h"

/**
 * _strncat - concantenates two strings, using at most n bytes from src
 *
 * @dest: The destination string
 *
 * @src: The source string to append to dest
 *
 * @n: The maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';

	return (dest);
}
