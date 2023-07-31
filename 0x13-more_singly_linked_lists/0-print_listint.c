#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of object
 * @h: the object
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
