#include "main.h"

/**
 * factorial - factorial recursively
 * @n: int arg
 * Return: void
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
