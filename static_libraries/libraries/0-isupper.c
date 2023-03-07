#include "main.h"
/**
 * _isupper - letters in upper
 * @c: variable or parameter
 * Return: one true or zero false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
