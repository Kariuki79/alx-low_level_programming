#include "lists.h"

/**
 * list_len - returns the number of elememts in a list_t
 * @h: pointerto the list_t
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		m++;
		h = h->next;
	}

	return (m);
}
