#include "main.h"
/**
 * set_bit - set the bit field of the current
 *
 * @n: number of bits to set the bit field of the current
 * @index: index of the bit field
 *
 * Return: 0 if successful and 1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1UL << index);
return (1);
}
