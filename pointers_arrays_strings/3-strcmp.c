#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: parameter
 * @s2: parameter
 * Return : compare two strings
 *
 */
int _strcmp(char *s1, char *s2)
{
int result;

result = strcmp(s1, s2);

return (result);

/*for (index = 0; index < n && src[index] != '\0' ; index++)
{
dest[index] = src[index];
}
for (; index  < n; index++)
{
dest[index] = '\0';
}
return (dest);*/
}
