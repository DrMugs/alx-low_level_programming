#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begining of list
 * @head : adress to the head
 * @n : number to be added
 * Return: a node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		*head = node;
		return (*head);
	}


	node->next = (*head);

	(*head) = node;

	return (*head);
}

