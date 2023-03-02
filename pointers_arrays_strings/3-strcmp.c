#include "main.h"

/**
* *_strcmp - function
* @s1: string
* @s2: string
* Description: compare two string
*
* Return: string
*/
int _strcmp(char *s1, char *s2)
{
int r = *s1 - *s2;
while (*s1 != '\0' && *s2 != '\0' && r == 0)
{
s1++;
s2++;
r = *s1 - *s2;
}
return (r);
}
