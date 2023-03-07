#include "main.h"

/**
* _print_rev_recursion - function
* @s: character array pointer
* Description: print a string in reverse
*
* Return: Always 0
*/
void _print_rev_recursion(char *s)
{
if (!*s)
return;
_print_rev_recursion((s + 1));
_putchar(*s);
}
