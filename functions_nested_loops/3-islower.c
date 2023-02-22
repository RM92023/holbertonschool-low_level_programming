#include "main.h"
#include <ctype.h>
/**
 * int _islower(int c) - character lowercase
 *
 * Return: Always 0.
 *
 */
int _islower(int c)
{
if(islower(c >= 'a') && islower(c <= 'z'))
return (1);
else
return (0);
}

