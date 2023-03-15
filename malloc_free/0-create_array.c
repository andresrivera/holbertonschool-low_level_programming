#include <stdlib.h>
#include "main.h"

/**
* *create_array - function
* @size: size bytes
* @c: character
* Description: create an array of chars, and initializes it with specific char
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (i = 0; 1 < size; i++)
{
str[i] = c;
}
return(str);
}
