#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 * @a: int type array pointer
 * @n: int type integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}

	printf("\n");

}
