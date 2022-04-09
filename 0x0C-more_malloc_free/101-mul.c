#include <stdlib.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: a string
 *
 * Return: 0
 */

int _puts(const char *str)
{
while (*str)
_putchar(*str++);
return (1);
}

/**
 * main - prints the product of it's 2 arguments
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 or 98
 */

int main(int argc, char **argv)
{
int len_1 = 0, len_2 = 0, len_r = 0, i, j, len_r_tmp, carry = 0, len_tmp;
char *s1, *s2, *s_tmp, *res, c1, c2, dig_1, dig_2, temp_res, t2 = 0, sig0 = 0;

if (argc != 3)
return (!!_puts("Error\n") * 98);
s1 = argv[1], s2 = argv[2];
for (; c1 = s1[len_1], c2 = s2[len_2], c1 || c2; len_1 += !!c1, len_2 += !!c2)
{
c1 = s1[len_1], c2 = s2[len_2];
if ((c1 && (c1 < '0' || c1 > '9')) || ((c2 && (c2 < '0' || c2 > '9'))))
return (_puts("Error\n"), 98);
}
carry = 0, len_r = len_1 + len_2 + 1;
res = malloc(sizeof(char) * len_r--);
if (res == NULL)
return (_puts("Error\n"), 98);
len_r_tmp = len_r;
while (len_r_tmp > 0)
res[len_r_tmp--] = 0;
len_tmp = len_1, s_tmp = s1;
if (len_2 > len_1)
s1 = s2, s2 = s_tmp, len_1 = len_2, len_2 = len_tmp;
for (i = len_2 - 1; i >= 0; i--)
{
for (j = len_1 - 1; j >= 0; j--)
{
dig_1 = s1[j] - '0', dig_2 = s2[i] - '0';
temp_res = dig_1 * (dig_2) + carry;
t2 = (temp_res + res[i + j + 1]);
res[i + j + 1] = (t2 % 10), carry = t2 / 10;
}
res[i] += carry, carry = 0;
}
for (i = 0, sig0 = 0; i < len_r; i++, sig0 = sig0 || !!res[i])
if (res[i] || sig0 || i == len_r - 1)
_putchar(res[i] + '0');
_putchar('\n');
free(res);
return (0);
}
