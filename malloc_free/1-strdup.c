#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function for print Duplicate
 * @str: parameter
 *
 * Return: 0
 *
 */
char *_strdup(char *str)
{
int i;
char *s;
if (str == 0)
return (0);
for (i = 0; str[i]; i++)
;
s = malloc(sizeof(char) * (i + 1));
if (s == 0)
return (0);
s[i] = '\0';
while (i--)
{
s[i] = str[i];
}
return (s);
}
