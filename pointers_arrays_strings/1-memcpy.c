#include "main.h"
/**
 * _memcpy - copy bytes from memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: bytes from memory area
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *destiny = dest;
char *source = src;
for (i = 0; i < n; i++)
destiny[i] = source[i];
return (dest);
}
