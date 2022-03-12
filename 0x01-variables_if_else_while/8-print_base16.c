#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
