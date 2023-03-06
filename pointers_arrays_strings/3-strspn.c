#include "main.h"

/**
* _strspn - function
* @s: character string pointer
* @accept: character string pointer
* Description: gets lenght of a prefix substring
*
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int k;
for (i = 0; s[i] != 0; i++)
{
k = 0;
for (j = 0; accept[j] != 0; j++)
{	  
if (s[i] == accept[j])
{
k = 1;
}
}
if (k == 0)
{
break;
}
}
return (i);
}
