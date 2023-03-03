#include "main.h"
/**
 * reverse_array - print integers in reverse
 * @a: parameter
 * @n: parameter
 * Return: reverse array of integers
 *
 */
void reverse_array(int *a, int n)
{
int i, last;
last = n - 1;
for (i = 0; i < n / 2; i++)
{
int start, end;
start = a[i];
end = a[last];
a[i] = end;
a[last] = start;
last--;
}
}
