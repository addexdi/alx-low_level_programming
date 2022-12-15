#include "main.h"
/* Main header files here */

/**
 * _islower - checks if an alphabet is in lower case
 *@c: contains value to be compared
 * Return: return 0 or 1
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
