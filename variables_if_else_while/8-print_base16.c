#include <stdio.h>

/**
* main - function
* description - print hexadecimals
*
* Return: Always 0
*/
int main(void)
{
int number;
for (number = 0; number < 16; number++)
{
if (number < 10)
{
putchar('0' + number);
}
else
{
putchar(87 + number);
}
}
putchar('\n');
return (0);
}
