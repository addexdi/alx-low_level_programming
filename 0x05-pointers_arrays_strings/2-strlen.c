#include "main.h"

/**
 * _strlen - length of a string
 * @s: A POINTER to an int that will be updated
 *
 * Return: void means correct
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
return (u);
}
