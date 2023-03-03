#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: searches a string for any of a set of bytes
 *
 */
char *_strpbrk(char *s, char *accept)
{
char *result;
result = strpbrk(s, accept);
return (result);
}
