#include <stdio.h>
/**
 * main - Print Hexadecimal code
 *
 * Return: Always 0;
 *
 */
int main(void)
{
int number;
char letter;
for (number = 0; number <= 9; number++)
putchar('0' + number);
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
