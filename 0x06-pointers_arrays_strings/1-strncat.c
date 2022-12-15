#include "main.h"

/**
 * _strncat - concatenates strings of n bytes
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes for string src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
