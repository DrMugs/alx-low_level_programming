#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a function
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (*head != NULL)
	{
		hold = (*head)->next;
		free(hold);
		*head = hold;
	}

	*head = NULL;
}
