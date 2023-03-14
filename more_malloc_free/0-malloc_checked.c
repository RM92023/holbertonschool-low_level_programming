#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function allocates memory using malloc
 * @b: parameter
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
