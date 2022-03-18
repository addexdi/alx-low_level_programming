#include "main.h"

/**
 * puts_half - main function.
 * @str: Pointer, the string of numbers to print.
 * Description: This function prints half of a string.
 * Return: none.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
