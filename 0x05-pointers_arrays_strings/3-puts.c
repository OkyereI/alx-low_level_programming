#include "main.h"
#include "stdio.h"

/**
 *  _puts - print a string
 *  @str:pointer char
 *  return:void
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}

	_putchar('\n');

	return (0);
}
