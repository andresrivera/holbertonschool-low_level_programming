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
if (c <= 9)
{
_putchar('0' + c);
 if (c < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
first_digit = c;
while (first_digit >= 10)
{
first_digit = first_digit / 10;
}
_putchar('0' + first_digit);
last_digit = c % 10;
_putchar('0' + last_digit);
 if ( b < 9)
{
_putchar(',');
}
}
if (b <=  9)
{
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
