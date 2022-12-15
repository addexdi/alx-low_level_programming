#include "main.h"
/* main header file here */

/**
 * _abs - finds the absolute vale of a number
 *
 * @n: holds the number
 * Return: returns the absolute value of the number n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
