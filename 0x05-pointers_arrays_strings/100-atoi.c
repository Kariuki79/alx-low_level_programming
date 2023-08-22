#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer.
 * @s: Pointer to string.
 * Return: 0 if no numbers  in string
*/

int _atoi(char *s)
{
	int u, v, w, length, x, numb;

	u = 0;
	v = 0;
	w = 0;
	length = 0;
	x = 0;
	numb = 0;
	while (s[length] != '\0')
		length++;
			while (u < length && x == 0)
			{
				if (s[u] == '-')
					++v;
				if (s[u] >= '0' && s[u] <= '9')
				{
					numb = s[u] - '0';
					if (v % 2)
						numb = -numb;
					w = w * 10 + numb;
					x = 1;
					if (s[u + 1] < '0' || s[u + 1] > '9')
						break;
					x = 0;
				}
				u++;
			}
	if (x == 0)
		return (0);
	return (w);
}
