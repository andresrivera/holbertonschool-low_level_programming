#include "main.h"

/**
* _strcpy - function.
* @dest: string to save the copy.
* @src: string to copy.
*
* Return: pointer to string @dest.
*/
char *_strcpy(char *dest, char *src)
{
char *i = dest;
for (; *src != '\0'; src++)
{
*dest = *src;
dest++;
}
*dest = *src;
return (i);
}
