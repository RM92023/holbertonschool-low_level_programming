#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - return value of X raised to the power of Y
 * @x: parameter
 * @y: parameter
 * Return: 0
 *
 */
int _pow_recursion(int x, int y)
{
int result;

if (y < 0)
return (-1);
else if (y == 0)
return (1);

return (result = x * _pow_recursion(x, y - 1));
}
