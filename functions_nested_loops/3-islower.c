#include "main.h"

/**
 * _islower - Check if char is lower case
 * @c: arg
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c > 'A' && c < 'Z')
		return (0);
	else
		return (1);
}
