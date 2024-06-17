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
	char *arr;

	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		arr[i] = c;
	return (arr);
}
