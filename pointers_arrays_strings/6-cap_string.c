#include "main.h"

/**
* *cap_string - function
* @c: integer array pointer
* Description: change all lowercase letters of string to uppercase
*
* Return: string
*/
char *cap_string(char *c)
{
int i = 0;
while (c[i] != 0)
{
if (c[i] == 32 || c[i] == 9 || c[i] == 10 ||
c[i] == 44 || c[i] == 59 || c[i] == '.' || c[i] == 33 ||
c[i] == 63 || c[i] == 34 || c[i] == 40 || c[i] == 41 ||
c[i] == 123 || c[i] == 125)
{
i++;
if (c[i] >= 97 && c[i] <= 122)
{
c[i] = c[i] - 32;
}
else
{
i--;
}
}
i++;
}
return (c);
}
