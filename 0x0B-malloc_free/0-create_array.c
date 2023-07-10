#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @size : size of the array
 * @c : caracter to be assigned
 * Return: the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return ('\0');
	if (arr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
