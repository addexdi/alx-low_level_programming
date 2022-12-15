#include <stdio.h>
/* standard input output header file */

/**
 * main - prints all characterss in lower and upper case
 *
 * Description: Prints all cases of letters after the function
 * Return: returns zero
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}

	printf("\n");
	return (0);
}
