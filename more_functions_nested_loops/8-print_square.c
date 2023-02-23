#include "main.h"
/**
 * print_square - print a square in hashtag
 * @size: size of square
 * Return: square in size
 *
 */

void print_square(int size)
{
int high, width;
if (size < 0)
	_putchar('\n');
else
for (high = 0; high < size; high++)
{
for (width = 0; width < size; width ++)
	_putchar('#');

if (high == size - 1)
{
	continue;
	_putchar('\n');
}
}
_putchar('\n');
}
