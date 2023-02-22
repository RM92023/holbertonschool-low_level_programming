#include "main.h"
#include <ctype.h>
/**
 * _islower - character lowercase
 * @c: c  of variable check
 *
 * Return: 1 if is lowercase, 0 otherwise.
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
