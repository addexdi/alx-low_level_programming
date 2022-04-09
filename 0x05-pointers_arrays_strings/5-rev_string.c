#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: pointer, the string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	int f = 0;
	int b = 0;
	int z = 0;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (f < b + 1 / 2)
	{
		z = s[f];
		s[f] = s[b];
		s[b] = z;

		b--;
		f++;
	}
}
