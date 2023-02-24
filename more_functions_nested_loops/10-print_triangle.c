#include "main.h"
/**
 * print_triangle - triangle in hashtag
 * @size
 * Return: triangle in hashtag
 *
 */

void print_triangle(int size)
{
int hashtag, origin;
if (size > 0)
{
for (hashtag = 1; hashtag <= size; hashtag++)
{
for (origin = size - hashtag; origin > 0; origin--)
_putchar(' ');
for (origin = 0; origin < hashtag; origin++)
_putchar('#');
if (hashtag == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
