#include <stdio.h>
#include <stdlib.h>
/**
 * main - function principal
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a_int, b_int, result;
char *operations;
if (argc != 4)
{
puts("Error");
return (98);
}
a_int = atoi(argv[1]);
operations = argv[2];
b_int = atoi(argv[3]);
result = operations && *operations == '+' ? a_int + b_int :
operations && *operations == '-' ? a_int - b_int :
operations && *operations == '*' ? a_int *b_int :
operations && *operations == '/' && b_int != 0 ? a_int / b_int :
operations && *operations == '%' && b_int != 0 ? a_int % b_int :
0;
if (!result)
{
puts("Error");
return (*operations == '/' ? 100 : 99);
}
printf("%d\n", result);
return (0);
}
