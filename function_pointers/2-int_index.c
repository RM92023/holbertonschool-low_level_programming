#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integers
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 *
 *
 * Return: 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
