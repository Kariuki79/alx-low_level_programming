#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *head_count;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	head_count = *head;

	if (head_count != NULL)
	{
		while (head_count->prev != NULL)
			head_count = head_count->prev;
	}

	new_element->next = head_count;

	if (head_count != NULL)
		head_count->prev = new_element;

	*head = new_element;

	return (new_element);
}
