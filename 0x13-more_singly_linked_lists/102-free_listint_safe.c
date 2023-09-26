#include "lists.h"

/**
 * free_listint_safe - safely frees a linked list and counts the elements
 * @head_ptr: a pointer to a pointer to the head of the linked list.
 *
 * Return: the number of elements that were freed.
 */
size_t free_listint_safe(listint_t **head_ptr)
{
	size_t elements_freed = 0;
	int address_diff;
	listint_t *current_node;

	if (!head_ptr || !*head_ptr)
		return (0);

	while (*h)
	{
		address_diff = *h - (*h)->next;
		if (address_diff > 0)
		{
			current_mode = (*h)->next;
			free(*h);
			*h = current_mode;
			elements_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			elements_freed++;
			break;
		}
	}

	*h = NULL;

	return (elements_freed);
}
