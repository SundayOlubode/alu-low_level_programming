#include "dog.h"

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

	a_dog->(*name) = &name;
	a_dog->age = age;
	a_dog->(*owner) = &owner;

	return (a_dog);
}
