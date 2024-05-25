#include "main.h"

/**
 * print_to_98 -  Print all natural numbers from n to 98
 * @n: input
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{

		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(', ');
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(', ');
			}
			n--;
		}
	}

	_putchar('\n');
}
