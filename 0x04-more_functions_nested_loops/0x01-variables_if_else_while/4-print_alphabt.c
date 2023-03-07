#include <stdio.h>

/**
 * main - Entry point
  * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		if ((k != 'e') && (k != 'q'))
		{
			putchar(k);
			k++;
		}
		else
		{
			k++;
		}
	}
	putchar('\n');
	return (0);
}
