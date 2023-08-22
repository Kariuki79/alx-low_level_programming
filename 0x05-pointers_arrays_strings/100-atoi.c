#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer.
 * @s: Pointer to string.
 * Return: 0 if no numbers  in string
*/

int _atoi(char *s)
{
	int i, j, m, length, p, numb;

	a = 0;
	j = 0;
	m = 0;
	length = 0;
	p = 0;
	numb = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && p == 0)
	{
		if (s[a] == '-')
			++j;

		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';
			if (j % 2)
				numb = -numb;
			m = m * 10 + numb;
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			p = 0;
		}
		a++;
	}

	if (p == 0)
		return (0);

	return (m);
}
