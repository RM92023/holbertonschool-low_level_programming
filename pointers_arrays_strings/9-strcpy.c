#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: first value
 * @src: value final
 * Return: strings
 *
 */

char *_strcpy(char *dest, char *src)
{
int initial = 0;
while (src[initial])
{
dest[initial] = src[initial];
initial++;
}
return (dest);
}
