#include "main.h"
/**
 * char *_strncat - functions that concatenates two strings
 * @n: number of bytes from src
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] && n > y)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
