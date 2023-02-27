#include "main.h"
/**
 * swap_int - change values between two lets
 * @a: parameter one @b: parameter2
 * Return: swap values
 *
 */
void swap_int(int *a, int *b)
{
	int z;
	z = *a;
	*a = *b;
	*b = z;
}
