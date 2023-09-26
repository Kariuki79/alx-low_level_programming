#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list
 * Return: the number of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *current_mode, *elements_freed;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	elements_freed = (head->next)->next;
	current_mode = head->next;

	while (elements_freed)
	{
		if (elements_freed == current_mode)
		{
			current_mode = head;
			while (current_mode != elements_freed)
			{
				elements_freed = elements_freed->next;
				current_mode = current_mode->next;
			}

			current_mode = current_mode->next;

			while (current_mode != elements_freed)
			{
				nodes++;
				current_mode = current_mode->next;
			}
			return (nodes);
		}

		elements_freed(elements_freed)->next;
				current_mode = current_mode->next;
				return (0);
		}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
		size_t print_listint_safe(const listint_t *head)
		{
		size_t nodes, index = 0;

		nodes = looped_listint_len(head);

		if (nodes == 0)
		{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		}

		else
		{
			for (index = 0; index < nodes; index++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
		}
		return (nodes);
		}

