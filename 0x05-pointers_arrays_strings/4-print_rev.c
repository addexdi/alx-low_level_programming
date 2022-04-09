#include "main.h"

/**
 * print_rev - this function prints a string in reverse
 * @s: parameter for address
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

		count--;

		for (; count >= 0; count--)
		{
			_putchar(s[count]);
		}

		_putchar('\n');
}
