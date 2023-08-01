#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: the list
 * Return: pointer to new list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *y = NULL;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;

	return (*head);
}
