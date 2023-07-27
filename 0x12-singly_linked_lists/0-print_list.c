#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all elements in a list
 * @h : list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0, j;

	if (!(h->str))
	{
		printf("[0] (nil)\n");
		h = h->next;
		i++;
	}

	while (h != NULL)
	{
		i++;
		printf("[%d] ", h->len);
		j = 0;
		while (h->str[j] != '\0')
		{
			printf("%c", h->str[j]);
			j++;
		}
		printf("\n");

		h = h->next;
	}

	return (i);
}
