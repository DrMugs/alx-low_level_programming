#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - who let the dogs out
 * @d: dog to be frred
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
