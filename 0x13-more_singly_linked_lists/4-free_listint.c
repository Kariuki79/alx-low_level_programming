#include <stdio.h>
#include "lists.h"


/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *count;

	while (head != NULL)
	{
	count = head;
	count = head->next;
	free(head);
	}
}
