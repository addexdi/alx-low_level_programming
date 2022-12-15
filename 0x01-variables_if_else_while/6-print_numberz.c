#include <stdio.h>
#include <stdlib.h>
/* Headers file used */

/**
 * main - prints numbers using putchar
 *
 * Description: prints numbers using only putchar function
 * Return: returns zero when programme is completed
 */
int main(void)
{
	int ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
