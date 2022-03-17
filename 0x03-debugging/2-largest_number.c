#include "main.h"

/**
 * largest_number - returns the largest of three numbers.
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
