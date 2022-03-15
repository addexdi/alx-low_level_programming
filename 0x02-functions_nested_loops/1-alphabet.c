#include "main.h"


/**
 * print_alphabet - This function prints the alphabet in lower case.
 *
 *Return: 0 (success)
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
