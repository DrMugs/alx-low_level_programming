#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb : number of array elements
 * @size: size in bytes of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int  size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = (char *) malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	while (i < nmemb*size)
	{
		a[i] = 0;
		i++;
	}

	return (a);
}
