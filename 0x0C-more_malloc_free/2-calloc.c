#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of an array using malloc and sets it to zero.
 * @nmemb: Number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
 * or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
