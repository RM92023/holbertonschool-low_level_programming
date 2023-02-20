#include <stdio.h>
/**
 * main - Print Alphabet without e and q letter
 *
 * Return: 0.
 *
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if(alphabet !='e' && alphabet !='q')
{
putchar(alphabet);
}
}
return (0);
}
