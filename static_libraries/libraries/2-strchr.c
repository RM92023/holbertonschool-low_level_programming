#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: parameter
 * @c: parameter
 * Return: fills memory with a constant byte
 *
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] >= '\0')
{
if (s[i] == c)
return (s + i);
i++;
}
return ('\0');
}
