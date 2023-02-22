#include "main.h"
/**
 * print_sign - more o less or zero
 * @n: is variable
 * Return: + or - or zero
 *
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
else if (n == 0)
{
_putchar('0');
else if (n < 0)
{
_putchar('-');
}
}
}
}
