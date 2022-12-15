#include <stdio.h>
#include <stdlib.h>
/* These are all the header files used */

/**
 * main- Prints alphabets in reverse order
 *
 * Description: All alphabets are printed using putchar() in reverse method
 * Return: returns zero if code is sucessful
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar (ch);
	}

	printf("\n");
	return (0);
}
