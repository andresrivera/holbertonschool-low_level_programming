#include "main.h"
#include "_putchar.c"
/**
* _isupper - function
* @c: char
* Description: get a character and check if is uppercase or lowercase
*
* Return: 1 if c is uppercase, 0 is c is lowercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar('1');
}
else if (c >= 'a' && c <= 'z')
{
_putchar('0');
}
else
{
_putchar('N');
_putchar('o');
_putchar(' ');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
}
 return (0);
}
