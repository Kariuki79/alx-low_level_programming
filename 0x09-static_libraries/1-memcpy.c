#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:  pointer to a memory area
 * @src: pointer to a memory area
 * @n: n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
