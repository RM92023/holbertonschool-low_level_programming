#include <stdio.h>
/**
 * main - print fibonacci sum
 *
 * Return: fibonacci
 *
 */

int main(void)
{
long fibonacci1 = 0, fibonacci2 = 1, fibonaccisum;
float tot_sum;
while (1)
{
fibonaccisum = fibonacci1 + fibonacci2;
if (fibonaccisum > 4000000)
break;
if ((fibonaccisum % 2) == 0)
tot_sum += fibonaccisum;
fibonacci1 = fibonacci2;
fibonacci2 = fibonaccisum;
}
printf("%.0f\n", tot_sum);
return (0);
}
