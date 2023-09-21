#include <stdio.h>
#include "lists.h"

/**
 * print__list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, h->str);

			h = h->next;
			m++;
		}
	}
	return (m);
}
