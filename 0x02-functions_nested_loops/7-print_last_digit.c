#include "main.h"
/* main header file */

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: holds value
 * Return: returns either 0 or 1
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1 * (n % 10));
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = (n % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
