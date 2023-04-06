#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if index is out of bounds */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
/* Compute a mask with a 0 at the given index */
unsigned long int mask = ~(1ul << index);
/* Clear the bit at the given index by ANDing with the mask */
*n &= mask;
return (1);
}
