#include "main.h"

/**
 * _abs - This function computes the absolute
 *  value of an integer
 *
 *  @r: r is an ascii character
 *
 *  Return: always r (success) or -r (negative)
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
