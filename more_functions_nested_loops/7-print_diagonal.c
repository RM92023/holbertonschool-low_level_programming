#include "main.h"
/**
 * print_diagonal - diagonal line in the code
 * @n: parameter
 * Return: print diagonal
 *
 */
void print_diagonal(int n)
{
int diagonals, count;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (count = 0; count < n; count++)
{
	diagonals = count;
	while (diagonals > 0)
	{
		_putchar(' ');
		diagonals--;
	}
	_putchar('\\');
	_putchar('\n');
}
}
}
