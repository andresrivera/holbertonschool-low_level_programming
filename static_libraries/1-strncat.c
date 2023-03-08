#include "main.h"

/**
* *_strncat - function
* @dest: string
* @src: string initial
* @n: size of bytes
* Description: concatenate string from pointers
*
* Return: return pointer to string d
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != 0; i++)
{

}
for (j = 0; j < n && src[j] != 0; j++, i++)
{
dest[i] = src[j];
}
return (dest);
}
