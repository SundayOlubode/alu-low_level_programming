#include "dog.h"

/**
 * init_dog - Initializes a new dog struct
 * @d: struct dog
 * @name: pointer to name
 * @age: float age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
