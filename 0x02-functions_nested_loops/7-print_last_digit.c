#include "main.h"

/**
 * print_last_digit - This function prints the
 * last digit of a number
 *
 * @j: is an ascii character
 *
 * Return: Always 0
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
