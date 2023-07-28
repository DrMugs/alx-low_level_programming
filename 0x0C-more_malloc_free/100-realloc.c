#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates memory to new size
 * @old_size : old size of block
 * @new_size : new size of block
 * @ptr : the old block of memory
 * Return: pointer to new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);
	free(ptr);

	return (ptr);
}
