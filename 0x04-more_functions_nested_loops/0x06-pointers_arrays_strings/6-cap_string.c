#include "main.h"
#include <stdio.h>

/**
 * cap_string - function
 * @str: Pointer
 * Return: poniter return to function.
 */

char *cap_string(char *str)
{
	int x, y;

	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!',
				'?', '"', '(', ')', '{', '}'};
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		for (y = 0; y < 14; y++)
			if (str[x] >= 97 && str[x] <= 122 && str[x - 1] == symb[y])
				str[x] = str[x] - 32;
	}

	return (str);
}
