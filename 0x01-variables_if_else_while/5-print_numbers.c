#include <stdio.h>
#include <stdlib.h>
/* These are all header files*/

/**
 * main- prints all numbers in base ten
 *
 * Description: All numbers will be printed
 * Return: returns zero
 */
int main(void)
{
	int i = 0;
	int count = 10;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
		count++;
	}
	printf("\n");
	return (0);
}
