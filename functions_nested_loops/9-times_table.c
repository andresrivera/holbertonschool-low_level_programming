#include "main.h"

/**
* times_table - function
* Description: prints the 9 times table
*
* Return: Always 0
*/
void times_table(void)
{
int a, b, c;
int first_digit = 0;
int last_digit = 0;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
first_digit = c / 10;
last_digit = c % 10;
if (first_digit == 0)
{
_putchar(last_digit + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
else
{
_putchar(first_digit + '0');
_putchar(last_digit + '0');
 if(b != 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
}
