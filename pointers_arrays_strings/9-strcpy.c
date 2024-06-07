#include "main.h"

/**
 * _strcpy - Copy String
 * @dest: Destination
 * @src: Source
 * Return: pointer to copied char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
