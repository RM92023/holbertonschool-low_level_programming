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
char Alphabet;
for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
{
putchar(Alphabet);
putchar(toupper(Alphabet));
putchar('\n');
}
return (0);
}
