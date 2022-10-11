#include "main.h"

/**
 * _strlen - function that returns length og string
 * @s: the string
 *
 * Return: string length
 */

int _strlen(char *s)
{
int i;

for (i = 0 ; s[i] != '\0' ; i++)
;
return (i);
}
