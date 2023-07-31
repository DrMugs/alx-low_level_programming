#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds node to the end of list
 * @head : adress to list
 * @n: the vlue to be entered
 * Return: adress of new lelement
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->next = NULL;
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (*head != NULL)
	{
		*head = head->next;
	}

	head->next = node;

	return (node);
}
