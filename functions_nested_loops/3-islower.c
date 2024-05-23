#include "main.h"

/**
 * _islower - Check if char is lower case
 * @c: arg
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c > 64 && c < 98)
		return (0);
	else if (c > 96 && c < 123)
		return (1);
}
