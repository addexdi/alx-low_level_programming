#include <stdio.h>

/**
 * positive_or_negative - this program checks
 * if a number is positive or negative
 * @n: is an integer
 *
 * Return: Always void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is positive\n", n);
	else
		printf("%d is Zero\n", n);
}
