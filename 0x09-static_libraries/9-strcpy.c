#include "main.h"

/**
 * _strcpy - Copies strings pointed to by sr
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: Pointer to destination array
*/

char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m] != '\0')
	{
		*(dest + m) = src[m];
		m++;
	}
	*(dest + m) = '\0';
	return (dest);
}
