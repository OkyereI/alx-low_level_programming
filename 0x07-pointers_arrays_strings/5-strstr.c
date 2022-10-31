#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
 */

char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;
		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;
			}	while (haystack[j] == needle[j]);
		}
		haystack++;
	}

	return ('\0');
}

