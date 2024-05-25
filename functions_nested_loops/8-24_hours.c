#include "main.h"

/**
 * jack_bauer -  Prints every minute of the day of Jack Bauer
 * 
 * Return: void
 */
int jack_bauer(void)
{
	int hour, min = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 1));
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
