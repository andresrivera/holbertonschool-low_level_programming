#include "main.h"

/**
* _abs - function
* @n: integer
* Description: Compute the absolute value of an integer
*
* Return: Always 0
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n = -1 * n;
return (n);
}
}
