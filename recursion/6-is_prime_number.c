#include "main.h"
int _helper(int n, int i);

/**
 * is_prime_number - Find prime number recursively
 * @n: int arg
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_helper(n, 2));
}

/**
 * _helper - Helper function
 * @n: int arg
 * @i: int arg
 * Return: int
 */
int _helper(int n, int i)
{
	if (i > n/2)
	{
		return (1);
	}

	if ((n % i) == 0)
	{
		return (0);
	}

	return (_helper(n, i + 1));
}
