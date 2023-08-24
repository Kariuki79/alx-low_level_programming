#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: The first string
 * @s2: The Second string
 * Return: result of s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int u, v;

	u = 0;
	v = 0;
	while (s1[u] && (s1[u] == s2[v]))
	{
		u++;
		v++;
	}
	return (s1[u] - s2[v]);
}
