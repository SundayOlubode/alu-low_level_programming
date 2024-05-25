#include "main.h"
/**
 * times_table -  Print 9 row and cols of the times table
 * Return: void
 */
void times_table(void)
{
	int row, column, product = 0;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			product = row * column;
			if (product < 10)
			{
				if (column != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
