#include "main.h"

/**
 * _print_rev_recursion - Put recursively
 * @s: string pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
