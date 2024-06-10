#include "main.h"

/**
 * _pow_recursion - Power x recursively
 * @x: int arg
 * @y: int arg
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
