#include "main.h"

/**
* _isdigit - function
* @c: integer to check
* Description: Check for a digit (0 throught 9)
*
* Return: 1 if c is a digit, otherwise return 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
