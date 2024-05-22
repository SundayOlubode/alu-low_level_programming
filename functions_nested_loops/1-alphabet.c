#include "main.h"

/**
 * Print alphabet - prints alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n'); /* print new line */
	return (0);
}
