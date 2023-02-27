#include "main.h"

/**
 *  reverse_array - Reverses the content of an array of integers.
 *  @a: The array of integers to be reversed.
 *  @n: The number of elements in the array.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
