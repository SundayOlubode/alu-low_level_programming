#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}

/**
 * main - entry point
 *
 * return 0 - Success
 */
int main(void)
{
	print_alphabet();

	return (0);
}
