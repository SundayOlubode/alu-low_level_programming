#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}

	for (C = 65; C <= 90; C++)
		putchar(C);

	putchar('\n'); /* print new line */

	return (0);
}
