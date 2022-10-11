#include <stdio.h>
#include "main.h"

/**
 * swap_int - This function swaps the value of
 * two integers.
 * @a: pointer with the address value
 * @b: pointer with the address value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
