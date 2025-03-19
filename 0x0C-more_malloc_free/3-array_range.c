#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum integer in the array
 * @max: The maximum integer in the array
 *
 * Return: pointer to the newly created array, or NULL if min > max
 * of if malloc fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	arr[i] = min + 1;

	return (arr);
}
