#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times
 * the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
