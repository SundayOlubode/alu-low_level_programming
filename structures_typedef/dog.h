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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
