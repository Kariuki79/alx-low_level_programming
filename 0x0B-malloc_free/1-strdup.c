#include <stdlib.h>

/**
  * _strdup - returns a pointer to a new string
  * @str: the string we are duplicating
  * Return: NuLL if str = NULL
  */
char *_strdup(char *str)
{
	int a = 0,
	int i = 1;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (a < i)
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
