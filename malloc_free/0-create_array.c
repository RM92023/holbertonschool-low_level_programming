#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Array of chars, and initialice with character
 * @size: parameter
 * @c: parameter
 *
 * Return: 0
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;

if (size <= 0)
return (0);

ar = malloc(size);

if (ar == 0)
return (0);

for (i = 0; i < size; i++)
ar[i] = c;

return (ar);
}
