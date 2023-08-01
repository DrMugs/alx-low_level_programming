#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a function
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;
	listint_t *trans = *head;

	while (trans != NULL)
	{
		hold = trans;
		trans = trans->next;
		free(hold);
	}
}
