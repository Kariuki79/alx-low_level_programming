#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to the previous allocated memory block
 * @old_size: Size in bytes of the allocated memory block
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* if ptr is NULL, equilavent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy data from old block to new block,upto min(old_size, new_size) */
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	/* Free old memory block */
	free(ptr);

	return (new_ptr);
}
