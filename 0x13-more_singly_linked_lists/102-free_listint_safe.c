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

	while (*head_ptr)
	{
		address_diff = *head_ptr - (*head_ptr)->next;
		if (address_diff > 0)
		{
			current_node = (*head_ptr)->next;
			free(*head_ptr);
			*head_ptr = current_node;
			elements_freed++;
		}
		else
		{
			free(*head_ptr);
			*head_ptr = NULL;
			elements_freed++;
			break;
		}
	}

	*head_ptr = NULL;

	return (elements_freed);
}
