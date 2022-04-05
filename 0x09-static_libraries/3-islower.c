#include "main.h"

/**
 * _islower - This function checks for lowercase character
 *
 * @c: ia an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
