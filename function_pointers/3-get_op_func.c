#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - principal function
 * @s: parameter
 *
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

op_t *op = ops;

while (op->op != NULL)
{
if (op->op[0] == *s)
	return (op->f);
op++;
}
return (NULL);
}
