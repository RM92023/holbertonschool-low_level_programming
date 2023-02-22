#include "main.h"
/**
 * times_table - prints nine times table, starting in zero
 *
 * Return: nine Times table of multiply
 *
 */

void times_table(void)
{
int numbers, multiplys, products;
for (numbers = 0; numbers <= 9; numbers++)
{
_putchar('0');
for (multiplys = 1; multiplys <= 9; multiplys++)
{
_putchar(',');
_putchar(' ');
products = numbers * multiplys;
if (products <= 9)
_putchar(' ');
else
_putchar((products / 10) + '0');
_putchar((products % 10) + '0');
}
_putchar('\n');
}
}

