#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: ponter to a new string
 */
char *argstostr(int ac, char **av)
{
	int mc = 0, q = 0, t = 0, r = 0;
	char *pull;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (q < ac)
	{
		while (av[q][r])
		{
			mc++;
				r++;
		}

		r = 0;
		q++;
	}

	pull = malloc((sizeof(char) * mc) + ac + 1);

	q = 0;
	while (av[q])
	{
		while (av[q][r])
		{
		pull[t] = av[q][r];
		t++;
			r++;
		}

		t++;
	}

	pull[t] = '\0';
	return (pull);
}
