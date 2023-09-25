#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new beginning of a listint_t list.
 * @head: a pointer to a pointer to the end of the list
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, of NUlL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count;
		count = malloc(sizeof(listint_t));
	if (count == NULL)
	{
		return (NULL);
	}

	count->n = n;
	count->next = *head;

	*head = count;

	return (count);
}
