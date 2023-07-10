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
	char *pnt, *p;

	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	pnt = malloc(len + 1);
	p = pnt;
	if (pnt == NULL)
		return (NULL);
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (pnt);
}
