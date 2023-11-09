#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element;
	dlistint_t *head_count;
	unsigned int index;

	new_element = NULL;
	if (idx == 0)
		new_element = add_dnodeint(h, n);
	else
	{
		head_count = *h;
		index = 1;
		if (head_count != NULL)
			while (head_count->prev != NULL)
				head_count = head_count->prev;
		while (head_count != NULL)
		{
			if (index == idx)
			{
				if (head_count->next == NULL)
					new_element = add_dnodeint_end(h, n);
				else
				{
					new_element = malloc(sizeof(dlistint_t));
					if (new_element != NULL)
					{
						new_element->n = n;
						new_element->next = head_count->next;
						new_element->prev = head_count;
						head_count->next->prev = new_element;
						head_count->next = new_element;
					}
				}
				break;
			}
			head_count = head_count->next;
			index++;
		}
	}

	return (new_element);
}
