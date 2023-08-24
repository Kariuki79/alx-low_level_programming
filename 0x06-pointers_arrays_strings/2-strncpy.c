#include "main.h"
/**
 * char *_strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p, q;

	p = 0;
	q = 0;
	while (src[q] != '\0' && q < n)
	{
		dest[p] = src[q];
		p++;
		q++;
		
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
