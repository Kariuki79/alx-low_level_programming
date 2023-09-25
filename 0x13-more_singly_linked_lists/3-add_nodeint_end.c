#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to a pointer to the head of the list
 * @n: the integer value to be restored in the new node
 *
 * Return: the adress of the new element of NUll if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count, *temp;


	count = malloc(sizeof(listint_t));
	if (count == NULL)
	{
		return (NULL);
	}

	count->n = n;
	count->next = NULL;

	if (*head == NULL)
	{
		*head = count;
	}
	else
	{
		temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = count;
	}

	return (count);
}
