#include "main.h"

/**
 * swap_int - Swap two int values
 * @a: first int
 * @b: second int
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
