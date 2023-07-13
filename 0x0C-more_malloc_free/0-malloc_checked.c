#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b : the amount memory to be allocated
 * Return: ponter with adress created
 */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);
	if (pnt == NULL)
		exit(98);

	return (pnt);
}
