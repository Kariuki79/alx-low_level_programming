#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of listint_t linked list
 * @head: a pointer to the head of the list.
 * @index: index of the node to retrieve
 *
 * Return: a pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; head != NULL && m < index; m++)
	{
		head = head->next;
	}


	return ((m == index) ? head : NULL);
}
