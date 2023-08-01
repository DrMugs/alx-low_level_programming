#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node at known position
 * @head : list
 * @idx : the posistion of node
 * @n : the number to be entered into the node
 * Return: address of new node or NULL of fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *holder = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; holder != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = holder->next;
			holder->next = node;
			return (node);
		}
		else
			holder = holder->next;
	}

	return (NULL);
}
