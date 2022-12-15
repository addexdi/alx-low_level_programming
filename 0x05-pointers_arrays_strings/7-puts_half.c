#include "main.h"

/**
 * puts_half - pronts every other character of a string
 *
 * @str: A POINTER
 * Return: void means correct
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
