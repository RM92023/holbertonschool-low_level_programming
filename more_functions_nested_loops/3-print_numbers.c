#include "main.h"
/**
 *print_numbers - print of zero until nine
 *
 * Return: secuence of zero a nine
 *
 */
void print_numbers(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
	{
	_putchar(numbers + '0');
	}
_putchar('\n');
}
