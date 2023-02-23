#include "main.h"
/**
 * more_numbers - print of zero until fourteen ten times
 *
 * Return: ten times numbers between zero and fourteen
 *
 */
void more_numbers(void)
{
int times, numbers;
for (times = 0; times < 10; times++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers > 9)
{
_putchar((numbers / 10) + '0');
}
_putchar((numbers % 10) + '0');
}
_putchar('\n');
}
}
