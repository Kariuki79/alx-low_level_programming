#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_count;
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	head_count = *head;

	if (head_count != NULL)
	{
		while (head_count->next != NULL)
			head_count = head_count->next;
		head_count->next = new_element;
	}
	else
	{
		*head = new_element;
	}

	new_element->prev = head_count;

	return (new_element);
}
