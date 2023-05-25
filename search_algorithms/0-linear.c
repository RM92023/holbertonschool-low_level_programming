#include "search_algos.h"

/**
 * linear_search - linear search algorithm for linear algorithms
 *
 * @array: array of linear algorithms
 * @size: size of array
 * @value: value to search
 *
 * Return: linear search result
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Comparing %d with %d\n", array[i], value);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
