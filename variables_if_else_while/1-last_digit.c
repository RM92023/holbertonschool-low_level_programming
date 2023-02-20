#include <stdlib.h>
#include <time.h>
/**
* main - Print mod of a number n
*
* Return: Always 0.
*
*/
int main(void)
{
int n, lNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lNumber = n % 10;
if (lNumber > 5)
printf("%dLast digit of ", n, "is", lNumber, "and is greater than 5\n");
else if (lNumber == 0)
printf("%dLast digit of ", n, "is", lNumber, "and is 0\n");
else if (lNumber > 0 && lNumber < 6)
printf("%dLast digit of ", n, "is", lNumber, "and is less than 6 and not 0\n");
return (0);
}
