#include "main.h"
#include <stdio.h>
/**
* print_to_98 - function
* @n: number to begin
* Description: Print all natural numbers from n to 98
*
* Return: Always 0
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d", n--);
printf("%d", n);
}
}
else
{
while (n < 98)
{
printf("%d", n++);
printf("%d", n);
}
}
}
