#include "main.h"

/**
* *_strpbrk - function
* @s: character string pointer
* @accept: character string pointer
* Description: search a string for any of a set of bytes
*
* Return: pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s != 0)
{
for (i = 0; accept[i] != 0; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (0);
}
