#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the elements in a  list
 * @head: A pointer to linkedlist
 * Return: number of nodes exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
