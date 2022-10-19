#include "main.h"

/**
 *  _islower - entry point
 *  Description: Return 1 if lowercase letter and 0 if not
 *  Return: 1 or 0
 */

int _islower(int x)
{
		if (x >= 'a' && x <= 'z')
			return (1);
				else
					return (0);
}
