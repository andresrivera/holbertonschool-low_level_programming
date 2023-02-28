#include "main.h"
#include <stdio.h>
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
while (s[n] != 0)
{
n++;
}
for (; n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
