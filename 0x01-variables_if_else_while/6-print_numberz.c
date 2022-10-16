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

	x = 48;
	while  (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
