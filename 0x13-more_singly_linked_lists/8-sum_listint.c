#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - sum of all data
 * @head : the list head
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}

