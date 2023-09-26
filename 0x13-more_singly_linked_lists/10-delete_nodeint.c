#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at certain index.
 * @head: pointer to the first element in the list.
 * @index: index of the node to be deleted
 * Return: 1 if succes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	 listint_t *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		return (1);
	}

	listint_t *temp = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	while (i < index)
	{
		if (!temp || !(temp->next))
			return (-1);

		previous = temp;
		temp = temp->next;
		i++;
	}


	previous->next = temp->next;
	free(temp);
	return (1);
}
