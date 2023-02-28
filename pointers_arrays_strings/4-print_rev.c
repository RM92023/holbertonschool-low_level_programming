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
int length = 0, text;
while (s[text++])
length++;
for (text = length - 1; text >= 0; text--)
_putchar(s[text]);
_putchar('\n');
}
