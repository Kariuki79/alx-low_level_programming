#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer.
 * @s: Pointer to string.
 * Return: 0 if no numbers  in string
*/

int _atoi(char *s)
{
	int a = 0, j = 0, m = 0, length = 0, p = 0, numb = 0;

	while (s[length])
		length++;
	while (a < length && p == 0)
	{
		if (s[a] == '-')
			++j;
		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';
			m = m * 10 + (j % 2 ? -numb : numb);
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
		}
		a++;
	}
	return (p ? m : 0);
}

