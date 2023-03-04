#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print chessboard
 * @a: parameter
 * @[8]: parameter
 * Return: print chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
int v, h;

for (v = 0; v < 8; v++)
{
	for (h = 0; h < 8; h++)
		_putchar(*((*a + v * 8) + h));

	_putchar('\n');
}
}
