#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b : the amount memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);
	if (pnt == NULL)
		exit(98);

	return (pnt);
}
