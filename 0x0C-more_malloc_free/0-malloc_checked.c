#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - The function allocates memory using malloc
 * @b: An integer to allocate size
 * Return: A pointer to the allocated memory created
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
