#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog characters
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 *
 * Description: stores dog name, owner and age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
