#include "main.h"
/**
 * flip_bits - flip bits from current
 *
 * @n: number of bits to flip
 * @m: number of bits to flip
 *
 * Return: unsigned int - number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff != 0)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
