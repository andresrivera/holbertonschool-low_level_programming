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
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
*dest = '\0';
return (dest);
}
