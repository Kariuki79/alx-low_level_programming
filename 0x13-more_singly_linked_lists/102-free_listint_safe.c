#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - safely frees a linked list and counts the elements
 * @h: a pointer
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}
/**
 * free_list - frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *t;

	if (head)
	{
		t = head;
		t = t->next;
		free(t);
		free_list(t);
	}
	free(head);
}
