#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t m;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
			new_node->str = strdup(str);

	for (m = 0; str[m]; m++)
		;
	new_node->len = m;
	new_node->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (current ->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (*head);
}
