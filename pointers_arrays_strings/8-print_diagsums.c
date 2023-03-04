#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sums betwee diagonals
 * @a: parameter
 * @size: parameter
 * Return: print diagonals
 *
 */

void print_diagsums(int *a, int size)
{
int sv = 0, sh = 0, row = 0, column = 0;
for (; row < size; row++)
{
	column++;
	sv += *(a + row * size + column);
	sh += *(a + row * size + (size - 1 - column));
}
printf("%d, %d\n", sv, sh);
}
