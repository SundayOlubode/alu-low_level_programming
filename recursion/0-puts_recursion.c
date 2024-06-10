#include "main.h"

/**
 * _puts_recursion - Put recursively
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
