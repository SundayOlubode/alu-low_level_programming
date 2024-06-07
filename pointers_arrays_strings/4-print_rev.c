#include "main.h"

/**
 * print_rev - Print in reverse
 * @s: String input pointer
 * Return - string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
