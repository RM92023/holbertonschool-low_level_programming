#include "main.h"
/**
 * print_alphabet_X10 - ten lines of Alphabet
 *
 * Return: Always 0.
 *
 */

void print_alphabet_x10(void)
{
char i, alphabet;
while (i <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
i++;
}
}
