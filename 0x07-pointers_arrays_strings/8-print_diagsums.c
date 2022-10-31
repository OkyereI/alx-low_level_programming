#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - print sum of 2 digona
 *  @a:int
 *  @size:int size
 *  Return:void
 */

void print_diagsums(int *a, int size)
{
	int i, f1 = 0, f2 = 0;

	for (i = 0; i < size; i++)
	{
		f1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		f2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", f1, f2);
}
