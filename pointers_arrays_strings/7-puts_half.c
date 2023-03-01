#include "main.h"

/**
* puts_half - function
* @str: string
* Description: prints half of a string
*
* Return: Always 0;
*/
void puts_half(char *str)
{
int n = 0;
int m;
while (str[n] != '\0')
{
n++;
}
m = n / 2;
if (n % 2 == 1)
{
m++;
}
for (; m < n; m++)
{
_putchar(str[m]);
}
_putchar('\n');
}
