#include <stdio.h>
/**
 * main - print number naturals until one thousand twenty four
 *
 * Return: number until 1024
 *
 */
int main(void)
{
int increment, sumatory;
for (increment = 0; increment < 1024; increment++)
{
if ((increment % 3) == 0 || (increment % 5) == 0)
sumatory = sumatory + 1;
}
printf("%d\n", sumatory);
return (0);
}
