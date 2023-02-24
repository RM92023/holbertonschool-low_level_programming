#include "main.h"
/**
 * print_number - print integer number
 *
 * Return: number integer
 *
 */
void print_number(int n)
{
unsigned int numberInt = n;
if (n < 0)
{
_putchar('-');
numberInt = -numberInt;
}
if ((numberInt / 10) > 0)
print_number(numberInt / 10);
_putchar((numberInt % 10) + '0');
}
