#include "main.h"

/**
 *swap_int - swap the values of two integers
 *
 *@a: a pointer to an integer that will be updated
 *@b: a pointer to an integer that will also be updated
 *Return: returns void that means our anser is correct
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
