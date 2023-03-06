#include "main.h"

/**
* *_strchr - function
* @s: character string pointer
* @c: character
* Description: locates a character in a string
*
* Return: pointer to first ocurrence of the character c, or NULL
*/
char *_strchr(char *s, char c)
{
char *i = s;
while (*i != 0 && *i != c)
{
i++;
}
if (*i != c)
{
return (0);
}
return (i);
}
