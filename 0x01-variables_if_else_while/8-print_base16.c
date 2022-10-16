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
	int x;
	char k;

	x = 48;
	while  (x < 58)
	{
		putchar(x);
		x++;
	}

	k = 'a';
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
