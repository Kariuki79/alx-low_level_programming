#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer.
 * @s: Pointer to string.
 * Return: 0 if no numbers  in string
*/

int _atoi(char *s)
{
	int a, j, m, length, p, numb;

	a = 0;
	j = 0;
	m = 0;
	length = 0;
	p = 0;
	numb = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < a; j++)
	{
		if((s[
	while (a < length && p == 0)
	{
		if (s[a] == '-')
		{
			++j;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';
			if (j % 2)
			{
				numb = -numb;
			}
			m = m * 10 + numb;
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			p = 0;
		}
		a++;
	}
	if (p == 0)
	{
		return (0);
	}
	return (m);
}






int _atoi(char *s)
{
	int a, b, ten2, neg, found;
	unsigned int ten;

	int a = 0;
	unsigned int n = 0;
	int b = 1;
	int c = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		if ((s[b] >= 48) && (s[b] <= 57))
		{
			ten = ten * 10 + (s[b] - '0');
			found = 1;
		}
		else if (s[b] == 45)
		{
			neg = neg * -1;
		}
		else if (found == 1)
		{
			break;
		}
	}
	ten2 = ten * neg;
	return (ten2);
}
