#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete index of listint_t
 * @head : the list
 * @index : the index
 * Return: 1 if success and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *hold = *head;
	listint_t *holder;

	if (!(*head))
		return (-1);
	if (!index)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	while (i < index - 1)
	{
		if (!hold || !(hold->next))
			return (-1);
		hold = hold->next;
		i++;
	}

	holder = hold->next;
	hold->next = holder->next;
	free(holder);

	return (1);
}

