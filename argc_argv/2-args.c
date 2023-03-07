#include <stdio.h>
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
int argument;

for (argument = 0; argument < argc; argument++)
printf("%s\n", argv[argument]);
return (0);
}
