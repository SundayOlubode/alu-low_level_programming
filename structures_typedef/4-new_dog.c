#include "dog.h"
#include <stdlib.h>
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
	dog_t *a_dog = malloc(sizeof(dog_t));

	if (a_dog == NULL)
		return (NULL);
	a_dog->name = malloc(strlen(name) + 1);
	if (a_dog->name == NULL)
		free(a_dog);
		return (NULL);

	strcpy(a_dog->name, name);

	a_dog->age = age;
	a_dog->owner = malloc(strlen(owner) + 1);
	if (a_dog->owner == NULL)
		free(a_dog->name);
		free(a_dog);
		return (NULL);

	strcpy(a_dog->owner, owner);
	return (a_dog);
}
