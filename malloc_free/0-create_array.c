#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create Array
 * @size: arg - size of array
 * @c: arg - char c
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	
	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);
	
	return (p);
}
