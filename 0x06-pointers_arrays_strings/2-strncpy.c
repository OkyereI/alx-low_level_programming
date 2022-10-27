#include"main.h"
#include <stdio.h>

/**
 * _strncpy - copy string
 * @src: pointer of char
 * @dest: pointer of char
 * @n: integer
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	if (x < n)
	{
		for (; x < n; x++)
			dest[x] = '\0';
	}

	return (dest);
}
