#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = list[i];
	newl[i] = new;
	free(list);
	return (newl);
}
/**
 * free_listint_safe - safely frees a linked list and counts the elements
 * @head_ptr: a pointer to a pointer to the head of the linked list.
 *
 * Return: the number of elements that were freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t a, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (a = 0; a < num; a++)
		{
			if (*head == list[a])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
