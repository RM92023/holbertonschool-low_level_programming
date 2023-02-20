#include <stdio.h>
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
}

for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
{
putchar(Alphabet);
}

putchar('\n');
return (0);
}
