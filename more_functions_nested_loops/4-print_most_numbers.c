#include "main.h"
/**
 * print_most_numbers - print of zero until nine exclude two and four
 *
 * Return: secuence of zero a nine
 *
 */
void print_most_numbers(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
if (numbers != 2 && numbers != 4)
_putchar(numbers + '0');
}
_putchar('\n');
}
