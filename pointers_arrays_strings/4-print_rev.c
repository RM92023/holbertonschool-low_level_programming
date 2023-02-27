#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: parameter
 * Return: string in reverse
 *
 */

void print_rev(char *s)
{
{
char *p1, *p2;
if (!s || !*s)
for (p1 = s, p2 = s + strlen(s) - 1; p2 > p1; ++p1, --p2)
{
*p1 ^= *p2;
*p2 ^= *p1;
*p1 ^= *p2;
}
}
}
