#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest: parameter
 * @src: parameter
 * Return: strings
 *
 */
char *_strcat(char *dest, char *src)
{
char *concat;
concat = strcat(dest, src);
return (concat);
}
