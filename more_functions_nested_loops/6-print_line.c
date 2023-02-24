#include "main.h"

/**
* print_line - function
* @n: number that gives the times it prints
* Description: prints n times the character '_'
*
* Return: Always 0
*/
void print_line(int n)
{
for (; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');
}
