#include<stdio.h>
/**
 * FizzBuzz - print multiplies three or five or three and five
 *
 * Return: multiplies bewtween three or five
 *
 */
int FizzBuzz(void)
{
int count;
for (count = 1; count <= 100; count++)
{
if ((count % 3 || count % 5) == 0)
printf("%d FizzBuzz", count);
else if (count % 3 == 0)
printf("%d Fizz", count);
else if (count % 5 == 0)
printf("%d Buzz", count);
else
printf("%d", count);
}
}
