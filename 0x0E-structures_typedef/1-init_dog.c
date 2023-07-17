#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilise the dog struct
 * @d: dog structre pointer
 * @name: name of dog to be assined
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
