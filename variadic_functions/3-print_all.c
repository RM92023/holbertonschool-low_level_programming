#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_all - function print all
 * @format: parameter
 * @*: parameter
 *
 * Return 0
 *
 */


void print_all(const char * const format, ...)
{
va_list parameters;
int n = 0, i = 0;
char *sep = ", ";
char *str;
va_start(parameters, format);
while (format && format[i])
i++;
while (format && format[n])
{
if (n == (i - 1))
{
sep = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(parameters, int), sep);
break;
case 'i':
printf("%d%s", va_arg(parameters, int), sep);
break;
case 'f':
printf("%f%s", va_arg(parameters, double), sep);
break;
case 's':
str = va_arg(parameters, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, sep);
break;
}
n++;
}
printf("\n");
va_end(parameters);
}
