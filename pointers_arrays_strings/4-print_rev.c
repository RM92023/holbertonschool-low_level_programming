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
int length, i;
char *start, *end, temp;

len = strlen(strl);
start = s;
end = s;

for (i = 0; i < length - 1; i++)
	end++

for (i = 0; i < length / 2; i++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
}
