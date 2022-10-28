#include "main.h"
#include <stdio.h>


/**
 * reverse_array - reversing function.
 * @a: pointer
 * @n: pointer
 * Return: No return
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	if (n % 2 != 0)
		z = n + 1;
	else
		z = n;
	for (x = 0; x < z / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
