#include<stdio.h>
/**
 * main - print multiplies three or five or three and five
 *
 * Return: multiplies bewtween three or five
 *
 */
int main(void)
{
int count;
for (count = 1; count <= 100; ++count)
{
if (count % 3 == 0)
printf("Fizz");
if (count % 5 == 0)
printf("Buzz");
if ((count % 3 != 0) && (count % 5 != 0))
printf("%d", count);
printf(" ");
}
return (0);
}
