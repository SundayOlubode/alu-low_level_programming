#include "main.h"

/**
 * _islower - Check if char is lower case
 * @c: arg
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
