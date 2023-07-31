#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - returns number of elements inlist
 * @h : the list
 * Return: the number of elemts
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
