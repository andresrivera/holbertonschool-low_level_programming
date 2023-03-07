#include "main.h"

/**
* _pow_recursion - function
* @x: number
* @y: number
* Description: print a string in reverse
*
* Return: Sum
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (!y)
{
return (1);
}
return (x * _pow_recursion(x, --y));
}
