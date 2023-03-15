#include <stdlib.h>
#include "main.h"

/**
* *_strdup - function
* @str: string to duplicate
* Description: return pointer to a duplicate string
*
* Return: pointer to duplicate string
*/
char *_strdup(char *str)
{
char *cpstr;
unsigned int i;
if (str == 0)
{
return (0);
}
for (i = 0; str[i]; i++)
;
cpstr = malloc(sizeof(char) * (i + 1));
if (cpstr == 0)
{
return (0);
}
cpstr[i] = '\0';
while (i--)
{
cpstr[i] = str[i];
}
return (cpstr);
}
