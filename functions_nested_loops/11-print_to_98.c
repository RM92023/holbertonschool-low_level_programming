#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers until ninetyeight
 * @n: save natural numbers
 * Return: ninetyeight natural numbers
 *
 */
void print_to_98(int n)
{
while (n <= 97)
{
printf("%d, ", n++);
}
printf("%d\n", n);

while (n >= 97)
{
printf("%d, ", n--);
}
printf("%d\n", n);
}
