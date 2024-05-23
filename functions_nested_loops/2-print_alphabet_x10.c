#include "main.h"

/**
 * Print alphabet 10x
 *
 * return void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;
	char* alphabet = '';

	while(c <= 'z')
	{
		alphabet += c;
		c++;
	}

	for (i = 0; i < 10; i++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
