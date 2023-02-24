#include "main.h"
#include "_putchar.c"
/**
* _isupper - function
* @c: char
* Description: get a character and check if is uppercase or lowercase
*
* Return: 1 if c is uppercase, 0 is c is lowercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
