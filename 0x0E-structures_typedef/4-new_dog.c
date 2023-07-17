#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates new dog struct
 * @name : name of dog
 * @age : age of dog
 * @owner : owner of dog
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (!(ptr))
		return (NULL);
	return (ptr);
}
