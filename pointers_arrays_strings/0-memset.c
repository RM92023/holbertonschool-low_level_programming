#include "main.h"
/**
 * _memset - fills memory with byt - fills memory with bytee
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: fills memory with a constant byte
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
