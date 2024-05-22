#ifndef HEADER_FILE
#define HEADER_FILE

#include "_putchar.c"

int print_alphabet(void);

/**
 * Print Alphabet - Function
 *
 * Return: Always 0 (Success)
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
#endif
