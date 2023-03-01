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
for (initial = 0; src[initial] != '\0'; initial++)
{
dest[initial] = src[initial];
}
dest[initial++] = '\0';
return (dest);
}
