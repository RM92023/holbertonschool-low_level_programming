#include "main.h"
/**
 * string_toupper - lower to upper
 *
 * Return: uppercase
 *
 */
char *string_toupper(char *var)
{
int i = 0;
int desp = 'a' - 'A';
for (i = 0; var[i] != '\0'; ++i)
{
if (var[i] >= 'a' && var[i] <= 'z')
{
var[i] -= desp;
}
}
return (var);
}
