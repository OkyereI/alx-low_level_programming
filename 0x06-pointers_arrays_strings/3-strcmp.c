#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function comparison of strings
 * @s1:  pointer
 * @s2:  pointer
 * Return: j-integer
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	y = 0;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			j = s1[x] - s2[x];
			break;
		}
	}
}
