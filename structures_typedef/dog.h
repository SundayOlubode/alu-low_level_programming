#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct type dog
 * @name: dog name pointer
 * @age: dog age in float
 * @owner: owner pointer
 */
typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
