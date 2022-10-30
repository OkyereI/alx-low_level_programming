#include "main.h"
#include<stdio.h>

/**
 *  main - count multiple.
 *  Return:void
 */

int main(void)
{
	int i, b, s, x, y;

	t = 0;
	for (i = 0; i <= (1024  / 3); i++)
	{
		y = i * 3;
		t = t + y;
	}
	for (b = 0; b < (1024 / 5); b++)
	{
		if (!(b % 3 == 0))
		{
			x = b * 5;
			t = t + x;
		}
	}
	printf("%i\n", t);

	return (0);
}
