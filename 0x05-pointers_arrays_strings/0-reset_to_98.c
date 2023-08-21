#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as a parameter
 * updates the value it points to 98
 * @n: will be a pointer
 *
 * Return: Nothing
*/

void reset_to_98(int *n)
{
	int n;
	n = &n;
	*n = 98;
}
