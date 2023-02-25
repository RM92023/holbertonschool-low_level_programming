#include <stdio.h>
/**
 * main - print fbonacci
 *
 * Return: fibonacci
 *
 */

int main(void)
{
int count;
long fibonacci1 = 0, fibonacci2 = 1, sumatory;
long fibonacci1_half1, fibonacci1_half2, fibonacci2_half1, fibonacci2_half2;
long half1, half2;
for (count = 0; count < 92; count++)
{
sumatory = fibonacci1 + fibonacci2;
printf("%lu, ", sumatory);
fibonacci1 = fibonacci2;
fibonacci2 = sumatory;
}
fib1_half1 = fibonacci1 / 10000000000;
fib2_half1 = fibonacci2 / 10000000000;
fib1_half2 = fibonacci1 % 10000000000;
fib2_half2 = fibonacci2 % 10000000000;
for (count = 93; count < 99; count++)
{
half1 = fibonacci1_half1 + fibonacci2_half1;
half2 = fibonacci1_half2 + fibonacci2_half2;
if (fibonacci1_half2 + fibonacci2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
printf(", ");
fibonacci1_half1 = fibonacci2_half1;
fibonacci1_half2 = fibonacci2_half2;
fibonacci2_half1 = half1;
fibonacci2_half2 = half2;
}
printf("\n");
return (0);
}
