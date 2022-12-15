#include <stdio.h>
#include <stdlib.h>
/* Headers used for the project */

/**
 *main- prints all hex values
 *
 * Description: This prints all the hex digits and This prints for answer main
 * Return: This returns zero after final execution
 */
int main(void)
{
	int ch;
	int i;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar (i);
	}
	putchar('\n');
	return (0);
}
