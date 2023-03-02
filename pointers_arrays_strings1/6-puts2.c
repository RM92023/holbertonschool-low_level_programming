#include "main.h"
/**
 * puts2 - print everyone character string
 * @str: parameter
 * Return: character strings
 *
 */

void puts2(char *str)
{
int character;
for (character = 0; str[character] != '\0' ; character++)
{
if ((character % 2) == 0)
_putchar(*(str + character));
}
_putchar('\n');
}
