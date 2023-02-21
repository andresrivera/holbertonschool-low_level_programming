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
if (islower(c) != 1)
{
_putchar('0');
}
else
{
_putchar('1');
}
return (0);
}
