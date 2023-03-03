#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: gets the length of a prefix substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
int b = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
b++;
break;
}
else if (accept[i + 1] == '\0')
return (b);
}
s++;
}
return (b);
}
