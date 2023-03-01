#include "main.h"

/**
* puts2 - function
* @str: string
* Description: prints every other character of a string
*
* Return: Always 0;
*/
void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
if (str[n] % 2 == 0)
{
_putchar(str[n]);
}
n++;
}
_putchar('\n');
}



