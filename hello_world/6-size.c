#include <stdio.h>

/**
 * main - Write a C program that prints the size of various types based on
 *        the computer it is compiled and run on.
 *
 * Return: 0.
 */
int main(void)
{
int number;
long int long_number;
long long int long_long_number;
char number_char;
float number_float;	
printf("Size of a char: %zu byte(s)\n", sizeof(number));
printf("Size of an int: %zu byte(s)\n", sizeof(long_number));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_long_number));
printf("Size of a long long int: %zu byte(s)\n", sizeof(number_char));
printf("Size of a float: %zu byte(s)\n", sizeof(number_float));
return (0);
}	
