#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head of node of listint
 * @head: head to the list
 * Return: the data on the number or 0 when empty
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int x = 0;

	if (*head == NULL || head == NULL)
	{
		free(*head);
		return (0);
	}

	x = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (x);
}
