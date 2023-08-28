#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of
 * a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Return: pointer to the byte  in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return NULL;
}
