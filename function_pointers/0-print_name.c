#include <stdio.h>
#include "function_pointers.h"
/**
 *
 *
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
else
f(name);
}
