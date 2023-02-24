#include "main.h"
/**
* print_diagonal - function
* @n: number of times
* Description: Prints n time '\'
*
* Return: Always 0
*/
void print_diagonal(int n)
{
int c, d;
if (n > 0)
{
for (c = 0; c < n; c++)
{
for (d = 0; d < c; d++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
