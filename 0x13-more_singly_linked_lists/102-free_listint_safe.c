#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _ra - reallocates memory
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t a;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newl[a] = list[a];
	newl[a] = new;
	free(list);
	return (newl);
}
/**
 * free_listint_safe - safely frees a linked list and counts the elements
 * @h: a pointer
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, number = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (number);
	while (*head != NULL)
	{
		for (i = 0; i < number; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (number);
			}
		}
		number++;
		list = _ra(list, number, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (number);
}
