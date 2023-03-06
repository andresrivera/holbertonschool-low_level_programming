#include "main.h"

/**
* _puts_recursion - function
* @s: character array pointer
* Description: print a string followed by a new line
*
* Return: Always 0
*/
void _puts_recursion(char *s)
{
if (!*s)
{
_putchar(*s);
_putchar('\n');
return ;
}
_putchar(*s);
_puts_recursion(s + 1);
}
