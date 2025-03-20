#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy data from old block to new block, up to min(old_size, new_size) */
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	/* Free old memory block */
	free(ptr);

	return (new_ptr);
}
