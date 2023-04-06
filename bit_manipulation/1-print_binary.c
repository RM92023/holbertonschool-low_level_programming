#include "main.h"

/**
 * print_binary - print binary information about the current process
 * @num: the number of bytes to print
 *
 * Return: the number of bytes printed
 */

void print_binary(unsigned long int num)
{
unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int flag = 0;
while (mask)
{
if (num & mask)
{
_putchar('1');
flag = 1;
}
else if (flag || mask == 1)
{
_putchar('0');
}
mask = mask >> 1;
}
}
