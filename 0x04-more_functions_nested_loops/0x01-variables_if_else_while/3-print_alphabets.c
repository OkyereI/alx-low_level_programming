#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	k = 'A';
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
