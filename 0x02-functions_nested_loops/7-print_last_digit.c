#include "main.h"

/**
 * print_last_digit - This function prints the
 * last digit of a number
 *
 * @r: is an ascii character
 *
 * Return: Always 0
 */
int print_last_digit(int r)
{
	int i;

	i = r % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
