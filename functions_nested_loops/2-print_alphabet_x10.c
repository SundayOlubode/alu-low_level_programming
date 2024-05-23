#include "main.h"

/**
 * Print alphabet 10x
 *
 * return void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;
	char alphabet[27];

	while(c <= 'z')
	{
		alphabet[i] = c;
		i++;
	}

	alphabet[i] = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
