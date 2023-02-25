#include <stdio.h>
/**
 * main - print fibbonaci
 *
 * Return: fibonacci until 50
 *
 */
int main(void)
{
int count;
long fibonacci1 = 0, fibonacci2 = 1, sumatory;
for (count = 0; count < 50; count++)
{
sumatory = fibonacci1 + fibonacci2;
printf("%lu", sumatory);
fibonacci1 = fibonacci2;
fibonacci2 = sumatory;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
