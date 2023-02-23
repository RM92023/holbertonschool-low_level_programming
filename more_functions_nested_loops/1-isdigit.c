#include "main.h"
/**
 * _isdigit - number betwee zero and nine
 * @c: parameter
 * Return: number between zero and nine
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
