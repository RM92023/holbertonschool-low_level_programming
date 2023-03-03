#include "main.h"
/**
 * _strcat - concat two strings
 * @dest: parameter
 * @src: parameter
 * Return: strings
 *
 */
char *_strcat(char *dest, char *src)
{
int text1, text2;
for (text1 = 0; dest[text1] != '\0'; text1++)
;
for (text2 = 0; src[text2] != '\0'; text2++)
{
dest[text1] = src[text2];
text1++;
}
return (dest);
}
