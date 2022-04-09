#include "main.h"
#include <stdio.h>

/**
 * _puts - This function prints a string
 * to the standard output
 * @str: pointer with the address value
 *
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

		_putchar('\n');
}
