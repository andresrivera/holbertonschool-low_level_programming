#include "main.h"
#include <stdio.h>

/**
* _puts - function
* @str: char
* Description: prints a string
*
* Return: Always 0
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
