#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
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

op_t *operations = ops;

while (operations->op != NULL)
{
if (operations->op[0] == *s)
	return (operations->f);
operations++;
}
return (NULL);
}
