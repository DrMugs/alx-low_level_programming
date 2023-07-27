#include "lists.h"

/**
 * free_list - free memory allocated to list
 * @head: points to a node on the list
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		free(head->str);
		head = head->next;
		free(hold);
	}
}
