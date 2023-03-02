#include "main.h"
/**
 * string_toupper - lower to upper
 * @var: parameter
 * Return: uppercase
 *
 */
char *cap_string(char *capitalize)
{
int i = 0;
while (capitalize[i])
{
while (!(capitalize[i] >= 'a' && capitalize[i] <= 'z'))
i++;
if (capitalize[i - 1] == ' ' ||
capitalize[i - 1] == '\t' ||
capitalize[i - 1] == '\n' ||
capitalize[i - 1] == ',' ||
capitalize[i - 1] == ';' ||
capitalize[i - 1] == '.' ||
capitalize[i - 1] == '!' ||
capitalize[i - 1] == '?' ||
capitalize[i - 1] == '"' ||
capitalize[i - 1] == '(' ||
capitalize[i - 1] == ')' ||
capitalize[i - 1] == '{' ||
capitalize[i - 1] == '}' ||
i == 0)
capitalize[i] -= 32;
i++;
}
return (capitalize);
}
