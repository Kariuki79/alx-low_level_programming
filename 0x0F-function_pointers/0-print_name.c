#include "main.h"
/**
 * print_name - a function that prints a name
 * @f: pointer to a function
 * @name: argument called name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
