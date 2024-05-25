#include "main.h"

/**
 * print_last_digit -  Print Last Digit
 * @n: input
 * Return: n % 10
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar(last_digit + '0');

	if(last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}
