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
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}
}
