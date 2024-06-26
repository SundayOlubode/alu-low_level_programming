#include "main.h"

/**
 * jack_bauer -  Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, min = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			int hr = hour / 10;

			_putchar(hr + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
