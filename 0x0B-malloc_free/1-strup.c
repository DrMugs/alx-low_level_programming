#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str : string to be duplicated
 * Return: pointer with new space
 */
char *_strdup(char *str)
{
	if (*str == NULL)
		return (NULL);

	char *ing;
	char *p;
	int len = 0;

	while (str[len])
		len++;
	ing = malloc(len + 1);
	p = ing;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (ing);
}
