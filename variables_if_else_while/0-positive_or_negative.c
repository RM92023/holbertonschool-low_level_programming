#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	   printf("%dIs Negative\n", n);
	else if (n > 0)
	   printf("%dIs Positive\n", n);
	else
	   printf("%dIs zero\n", n);
	return (0);
}
