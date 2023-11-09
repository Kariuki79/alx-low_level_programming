#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_count_1;
	dlistint_t *head_count_2;
	unsigned int ind;

	head_count_1 = *head;

	if (head_count_1 != NULL)
		while (head_count_1->prev != NULL)
			head_count_1 = head_count_1->prev;

	ind = 0;

	while (head_count_1 != NULL)
	{
		if (ind == index)
		{
			if (ind == 0)
			{
				*head = head_count_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head_count_2->next = head_count_1->next;

				if (head_count_1->next != NULL)
					head_count_1->next->prev = head_count_2;
			}

			free(head_count_1);
			return (1);
		}
		head_count_2 = head_count_1;
		head_count_1 = head_count_1->next;
		ind++;
	}

	return (-1);
}
