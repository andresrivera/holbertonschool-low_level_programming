#include "main.h"

/**
* print_rev - function
* @s: pointer type char s
* Description: Function that prints a string in reverse
*
* Return: Always 0
*/
void print_rev(char *s)
{
int n = 0;

while (*s)
{
n++;

_putchar(*s++);

}

_putchar('-');
 _putchar(*s);
 _putchar('-');

for (; n > 0; n--)
{
_putchar(*s--);
}
}
