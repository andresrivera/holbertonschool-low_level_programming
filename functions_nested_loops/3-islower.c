#include "main.h"
#include <ctype.h>

/**
* _islower(int c) - function
* description - Check for lowercase characters
*
* Return: 0
*/
int _islower(int c)
{
if (c >= 97 && c<= 122)
{
return(1);
}
else
{
return(0);
}
}
