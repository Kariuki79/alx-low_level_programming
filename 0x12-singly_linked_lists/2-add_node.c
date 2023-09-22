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
	list_t *new_node;
		unsigned int length = 0;

	while (str[length] != '\0')
			{
			length++;
			}
			new_node = malloc(sizeof(list_t));

			if (!new_node)
			{
			return (NULL);
			}

			new_node->str = strdup(str);
			new_node->length = length;
			new_node->next = (*head);
			(*head) = new_node;

			return (*head);
}
