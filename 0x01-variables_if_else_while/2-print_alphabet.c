#include <stdio.h>
/* standard input output header used as header file */

/**
 * main - prints all alphabets between a-z
 * @i = integer values corresponding to ANCII value of char
 *
 * Description: This will take a number print the ANCII char value
 * and the increment and do like wise until count is exhausted
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		printf("%c", i);

	}

	printf("\n");

	return (0);
}
