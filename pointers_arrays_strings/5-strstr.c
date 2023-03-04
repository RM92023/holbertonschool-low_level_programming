#include "main.h"
#include <stdio.h>
/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: parameter
 * @needle: parameter
 * Return: searches a string for any of a set of bytes
 *
 */
char *_strstr(char *haystack, char *needle)
{
char *count;

for (; *haystack; haystack++)
{
	count = haystack;
while (*needle == *haystack)
{
	haystack++, needle++;
}
if (*needle == '\0')
return (count);
}
return (0);
}
