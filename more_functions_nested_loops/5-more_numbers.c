#include "main.h"

/**
* more_numbers - function
* Description: Print 10 times the numbers from 0 to 14
*
* Return: Always 0;
*/
void more_numbers(void)
{
int n, c;
for (c = 0; c <= 9; c++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
