#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print all arguments receives
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
int num1, num2, resultado;
if (argc != 3)
{
printf("Error: El programa debe recibir exactamente dos argumentos.\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
resultado = num1 *num2;
printf("%d\n", resultado);
return (0);
}
