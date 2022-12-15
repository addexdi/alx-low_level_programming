#include "main.h"
/* This is for the main header file */

/**
 * print_alphabet- prints alphabets from a-z
 *
 * Return: Always 0
 * }
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
