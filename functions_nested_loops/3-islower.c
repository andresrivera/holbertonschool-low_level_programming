#include "main.h"
#include <ctype.h>

/**
* _islower - function
* Description: Check for lowercase characters
* @c - uppercase or lowercase character
*
* Return: 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
