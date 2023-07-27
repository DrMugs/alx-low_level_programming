#include "lists.h"
#include <string.h>

/**
 * add_node_end - add new node at the end
 * @head : head of the linked list
 * @str : the string
 * Return:  new end node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *trans_ver;
	unsigned int i = 0;

	new_list = (list_t *) malloc(sizeof(list_t));
	trans_ver = *head;

	if (new_list == NULL)
		return (NULL);

	new_list->next = NULL;
	new_list->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new_list->len = i;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	while (trans_ver->next != NULL)
		trans_ver = trans_ver->next;
	trans_ver->next = new_list;
	return (*head);
}
