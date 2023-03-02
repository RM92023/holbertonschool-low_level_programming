#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest
 * @src
 * Return: strings
 *
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
printf("%s", dest);
return (0);
}
