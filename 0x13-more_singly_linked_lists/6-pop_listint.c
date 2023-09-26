#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list and return its data.
 * @head: pointer to a pointer to the head of the list
 *
 * Return: data of the head mole or 0 is the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);


	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;


	return (data);
}
