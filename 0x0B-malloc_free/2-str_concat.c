#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *result;
		int m, n, dis1, dis2, dis;

	dis2 = dis1 = 0;

	if (s1 != NULL)
	{
		m = 0;
			while (s1[m++] != '\0')
				dis1++;
	}

	if (s2 != NULL)
	{
		m = 0;
			while (s2[m++] != '\0')
				dis2++;
	}

	dis = dis2 + dis1;
	result = (char *)malloc(sizeof(char) * (dis + 1));
	if (result == NULL)
		return (NULL);
	for (m = 0; m < dis1; m++)
		result[m] = s1[m];
	for (n = 0; n < dis2; n++, m++)
		result[m] = s2[n];
	result[dis] = '\0';

	return (result);
}
