#include "main.h"
/**
 * times_table - prints nine times table, starting in zero
 *
 * Return: nine Times table of multiply
 *
 */

void print_times_table(int n)
{
int number, multiply, result;
if (n >= 0 && n <= 15)
{
for (number = 0; number <= n; number++)
{
_putchar('0');
for (multiply = 1; multiply <= n; multiply++)
{
	_putchar(',');
	_putchar(' ');
	result = number * multiply;
	
	if (result >= 100)
        {
                _putchar((result / 100) + '0');
                _putchar((result % 100) / 10 + '0');
        }
	else if (result >= 10 && result <= 99)
	{
		_putchar((result / 10) + '0');
	}
		_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
