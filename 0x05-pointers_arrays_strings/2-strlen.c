#include <stdio.h>
#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: pointer with the address value
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
