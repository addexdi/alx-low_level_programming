#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character string
 * 
 * Return: on succes 1
 * on_error: -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
