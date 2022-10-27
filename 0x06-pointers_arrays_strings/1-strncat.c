#include "main.h"
#include <stdio.h>

/**
 * _strncat - function
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
