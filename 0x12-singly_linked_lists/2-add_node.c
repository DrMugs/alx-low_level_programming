#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the begining of a list
 * @head : address to head
 * @str : string to be added to new element
 * Return: pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int i = 0;

	new_list = (list_t *)malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->next = *head;
	new_list->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	new_list->len = i;
	*head = new_list;
	return (new_list);
}

