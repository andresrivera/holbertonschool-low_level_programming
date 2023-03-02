#include "main.h"

/**
* rev_string - function
* @s: pointer type char s
* Description: Function that prints a string in reversee
* Return: Always 0 
*/
void rev_string(char *s)
{
int n = 0;
while (*s)
{
_putchar(*s++);
n++;
}
_putchar('\n');*/
for (n = n + 1; n > 0; n--)
{
_putchar(*s--);
}
_putchar('\n');
}
