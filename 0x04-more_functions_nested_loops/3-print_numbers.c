#include "main.h"

/**
 * print_numbers - This function prints the numbers 0-9
 * followed by a new line
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');

}
