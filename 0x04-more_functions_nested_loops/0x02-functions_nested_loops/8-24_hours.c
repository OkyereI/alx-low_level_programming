#include "main.h"
#include <stdio.h>


/**
 * jack_bauer - display time 24h.
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour, minute, k, y, m, t;

	for (hour = 0; hour <= 23 ; hour++)
	{
		k = hour / 10;
		y = hour % 10;

		for (minute = 0; minute <= 59; minute++)
		{
			m = minute / 10;
			t = minute % 10;
			_putchar('0' + k);
			_putchar('0' + y);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + t);
			_putchar('\n');
		}
	}
}
