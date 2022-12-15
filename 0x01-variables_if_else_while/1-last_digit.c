#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* These are the headers used */

/**
 * main- This function prints the last number
 * of a randomly generated integer
 *
 * Description: This is it
 * Return: This returns zero when the program has finished
 */
int main(void)
{
	int n, ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;

	if (ldigit == 0)
		{
		printf("Last digit of %d is %d and is %d", n, ldigit, 0);
		}
	else if (ldigit >= 5)
		{
		printf("Last digit of %d is %d and is greater than %d", n, ldigit, 5);
		}
	else if (ldigit < 0 && ldigit < 5)
		{
		printf("Last digit of %d is %d and is less than %d and not %d",
		n, ldigit, 6, 0);
		}
	printf("\n");
	return (0);
}
