#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees listint lists
 * @head : head to the list
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}

