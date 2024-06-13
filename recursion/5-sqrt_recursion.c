#include "main.h"
int root_helper(int n, int root);

/**
 * _sqrt_recursion - Find square root recursively
 * @n: int arg
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (root_helper(n, 0));
}

/**
 * root_helper - Helper function
 * @n: int arg
 * @root: int arg
 * Return: int
 */
int root_helper(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}

	if ((root * root) > n)
	{
		return (-1);
	}

	return (root_helper(n, root + 1));
}
