#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_execution - function for validate if the number have root
 * @n: parameter
 * @root: parameter
 * Return: 0
 *
 */


int _sqrt_execution(int n, int root)
{
if ((root * root) == n)
return (root);
if (root == n / 2)
return (-1);

return (_sqrt_execution(n, root + 1));
}


/**
 * _sqrt_recursion - return natural square root of a number
 * @n: parameter
 * Return: natural square root of a number
 *
 */


int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);

return (_sqrt_execution(n, root));
}
