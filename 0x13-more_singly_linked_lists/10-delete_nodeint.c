#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at certain index.
 * @head: pointer to the first element in the list.
 * @index: index of the node to be deleted
 * Return: 1 if succes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
