#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - print one if is prime number
 * @n: parameter
 * Return: 0
 *
 */

int primeRecursive(int p, int i)
{
if (p <= 2)
	return (p == 2);
if (i >= p)
	return (1);
if (p % i == 0)
	return (0);

return primeRecursive(p, ++i);
}

int is_prime_number(int n)
{
if (n <= 2 || n % 2 == 0)
	return (n == 2);

return primeRecursive(n, 3);
}
