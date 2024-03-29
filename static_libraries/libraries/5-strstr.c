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
int index;
if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
