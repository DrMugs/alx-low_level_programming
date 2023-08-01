#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns n node index
 * @head : head of the list
 * @index : the number
 * Return: pointer of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i <= index)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
