#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - functions print numbers and a new line
 * @n: parameter
 * @separator: parameter
 *
 * Return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
