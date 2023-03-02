#include "main.h"
/**
 * leet - replace numbers
 * @variable: parameter
 * Return: letter forn numbers
 *
 */
char *leet(char *variable)
{
int k, j;
char min[] = {'a', 'e', 'o', 't', 'l', '\0'};
char may[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char num[] = {'4', '3', '0', '7', '1', '\0'};

for (k = 0; variable[k] != '\0'; k++)
{
for (j = 0; j < 5; j++)
{
if (variable[k] == min[j] || variable[k] == may[j])
{
variable[k] = num[j];
}
}
}
return (variable);
}
