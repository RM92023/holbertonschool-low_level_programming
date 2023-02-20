#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and will say if is number is Positive - Negative or Zero
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	   printf("%d is iositive\n", n);
	else if (n < 0)
	   printf("%d is negative\n", n);
	else
	   printf("%d is zero\n", n);
	return (0);
}
