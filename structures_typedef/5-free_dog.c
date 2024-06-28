#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the poor dog
 * @d: Pointer to dog instance
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	/* check to avoid dereferencing a NULL pointer */
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
