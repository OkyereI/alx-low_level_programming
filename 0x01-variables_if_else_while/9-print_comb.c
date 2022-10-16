#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = 48;
	while  (k < 58)
	{
		putchar(k);
		if (k !=  57)
		{
			putchar(44);
			putchar(32);
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

