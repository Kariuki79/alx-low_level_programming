#include <stddef.h>

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * return: The sum of all data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
