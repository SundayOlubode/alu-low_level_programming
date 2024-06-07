#include "main.h"

/**
 * _strlen - Find string length
 * @s: string pointer input
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
