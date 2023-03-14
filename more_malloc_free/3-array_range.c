#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an arrays of integers
 * @min: parameter
 * @max: parameter
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
int *arr;
int b;
if (min > max)
return (NULL);
b = max - min;
arr = malloc(sizeof(int) * (b + 1));
if (!arr)
return (NULL);
while (max > min)
{
arr[b] = max;
b--;
max--;
}
arr[b] = min;
return (arr);
}

