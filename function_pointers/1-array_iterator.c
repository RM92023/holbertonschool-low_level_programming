#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function given as a parameter
 * @array: parameter
 * @size: parameter
 * @action: parameter
 *
 *
 * Return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || !size || action == NULL)
	return;
else
	while (size--)
		action(*array++);
}
