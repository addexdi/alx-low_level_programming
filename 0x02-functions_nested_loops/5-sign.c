#include "main.h"
/* main header file here */

/**
 * print_sign - prints the sign of a number
 *
 * @n: holds the integer
 * Return: returns the value of the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
