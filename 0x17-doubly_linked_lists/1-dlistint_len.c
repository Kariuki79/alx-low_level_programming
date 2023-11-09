#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_head;

	count_head = 0;

	if (h == NULL)
		return (count_head);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count_head++;
		h = h->next;
	}

	return (count_head);
}
