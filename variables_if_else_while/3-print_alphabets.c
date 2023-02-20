#include <stdio.h>
#include <ctype.h>
/**
* main - Print alphabet in Mayus and Minus
*
* Return: Always 0.
*
*/
int main(void)
{
char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; Alphabet[i]; ++i)
{
putchar(Alphabet[i]);
Alphabet[i] = putchar(toupper(Alphabet[i]));
putchar('\n');
}
return (0);
}
