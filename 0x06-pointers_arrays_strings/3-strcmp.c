#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: The first string
 *
 * @s2: The second string
 *
 * Return: an integer less than, equal to, or greater than zero
 *
 * If s1 is found, respectively, to be less than, to match, or be greater
 *
 * than s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
