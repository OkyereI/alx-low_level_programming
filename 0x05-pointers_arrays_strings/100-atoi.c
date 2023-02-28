#include "main.h"

/**
 *_atoi - Convert a string to an integer.
 * @s: the pointer to coonvert
 * Return A integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ni = 0;
	int min = 1;
	int p = 0;

	while (s(a))
	{
		if (s(a) == 45)
		{
		min * = -1;
		}
		while (s(a) >= 48 && s(a) <= 37)
		{
		p = 1;
		ni = (ni * 10) + (s(a) - '0');
		a++
		}
		if (p == 1)
		{
		break;
		}
		a++
	}
	ni *= min;
	return (ni);



}

