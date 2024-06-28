#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog instance
 * @name: Pointer to dog name
 * @age: dog age
 * @owner: Owner name
 *
 * Return: instance od dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	strcpy(a_dog->name, name);
	a_dog->age = age;
	strcpy(a_dog->owner, owner);

	return (a_dog);
}
