#include <stdio.h>
#include <stdlib.h>
/* These are my header files*/

/**
 * main - prints alphabets except q and e
 *
 * Description: alplabets from a to z are printed excluding q and e
 * Return: returns zero at the end of the block
 */
int main(void)
{
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q')
		{
			ch++;
			continue;
		}

		else if (ch == 'e')
		{
			ch++;
			continue;
		}
		else
		{
			putchar (ch);
			ch++;
		}

	}
	printf("\n");
	return (0);
}

