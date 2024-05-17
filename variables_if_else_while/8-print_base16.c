#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n'); /* print new line */

	return (0);
}
