#include "main.h"
/* main header file */

/**
 * print_alphabet_x10 - print alphabets 10x
 *
 * Return - Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int count;

	count = 0;

	while (count < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{ 
		_putchar(i);
	}
	count++;
	_putchar('\n');
	}
}
