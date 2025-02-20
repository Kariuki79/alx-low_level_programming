#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initialize it with a char.
 * @size: The size of an array
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, NULL if size is 0 or allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* if size is 0, return null */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));

	/* Check if malloc failed */
	if (arr == NULL)
		return (NULL);

	/* Initialize each element in the array with the given character */
	for (i = 0; i < size; i++)
		arr[i] = c;

	/* Return pointer  to the created array */
	return (arr);
}
