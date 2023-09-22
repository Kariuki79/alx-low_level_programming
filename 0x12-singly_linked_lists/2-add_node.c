#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: double pointer to the head of the list_t
 * @str: string to be budplicated and stored in the new node
 *
 * Return: the adress of the new element
 * NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	size_t m;

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->str = strdup(str);

	for (m = 0; str[m]; m++)
		;

	current->len = m;
	current->next = *head;
	*head = current;

	return (*head);
}
