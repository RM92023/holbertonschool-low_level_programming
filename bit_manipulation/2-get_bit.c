#include "main.h"
/**
 * get_bit - get bit from bitmap table and return value of bit
 *
 * @n: number of bits in bitmap table
 * @index: index of bit in bitmap table
 *
 * Return: 1 if bit is set
 */
int get_bit(unsigned long int n, unsigned int index)
{
/* Verificar que el índice esté dentro del rango del número */
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
/* Desplazar el bit a la posición más a la derecha y verificar su valor */
if ((n >> index) & 1)
{
return (1);
}
else
{
return (0);
}
}
