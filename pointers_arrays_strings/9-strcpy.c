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
while (*src != '\0')
{
dest[initial] = *src;
initial++;
}
return (dest);
}
