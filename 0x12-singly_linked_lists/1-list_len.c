#include "lists.h"

/**
 * list_len - returns number of elements in linked lis
 * @h : the list
 * Return: the lenth of list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
