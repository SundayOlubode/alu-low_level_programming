#include <stdio.h>

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
		putchar(c);
	}
	putchar('\n'); /* print new line */
	return (0);
}
