#include "main.h"

/**
* _atoi - function.
* @s: pointer to char string
*
* Return: Always 0.
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int number = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
number = (number * 10) + (*s - '0');
else if (number > 0)
break;
}
while (*s++);
return (number * sign);
}
