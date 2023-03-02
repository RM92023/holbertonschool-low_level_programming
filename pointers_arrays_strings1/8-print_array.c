#include <stdio.h>
#include "main.h"
/**
 * print_array - print n array of integers
 * @a: parameter in pointers
 * @n: parameter in integer
 * Return: print arrays
 *
 */

void print_array(int *a, int n)
{
int count;
for (count = 0 ; count < n ; count++)
{
printf("%d", *(a + count));
if (count < n - 1)
{
printf(", ");
}
}
printf("\n");
}
