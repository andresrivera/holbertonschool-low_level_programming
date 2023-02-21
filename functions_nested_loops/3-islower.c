#include "main.h"
#include <ctype.h>

/**
* _islower(int c) - function
* description - Check for lowercase characters
*
* Return: 0
*/
int _islower(int c)
{
if (c >= 'a' && c<= 'z')
{
_putchar('1');
}
else
{
_putchar('0');
}
return (0);
}
