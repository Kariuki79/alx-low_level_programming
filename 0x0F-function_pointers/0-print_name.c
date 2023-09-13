#include "main.h"
/**
 * print_name - a function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
