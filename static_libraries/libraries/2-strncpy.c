#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copy string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: string copy
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
