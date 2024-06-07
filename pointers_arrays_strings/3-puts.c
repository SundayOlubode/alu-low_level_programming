#include "main.h"

/**
 * _puts - Put a string to the stdout
 * @str: String input pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
