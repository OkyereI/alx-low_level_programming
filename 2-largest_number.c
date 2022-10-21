#include "main.h"

/**
 *  largest_number - returns the largest of 3 numbers
 *    @a: first integer
 *     @b: second integer
 *      @c: third integer
 *       Return: largest number
 */

int main(void)
{
	int largest_number(int a, int b, int c);

	int largest, a, b, c;

	if (a > b && a > c)
	{
		printf("%d largest is.\n", a);
	}
	else if (b > c)
	{
		printf("%d  largest is \n", b);
	}
	else
	{
		printf("%d largest is\n", c);
	}

	return (largest);

}
