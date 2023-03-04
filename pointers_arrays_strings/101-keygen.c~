#include "main.h"

/**
* *leet - function
* @str: char array pointer
* Description: encodes a string into 1337
*
* Return: string
*/
char *leet(char *str)
{
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";
int i = 0;
int c;
while (str[i] != 0)
{
c  = 0;
while (letter[c] != 0)
{
if (str[i] == letter[c])
{
str[i] = number[c];
}
c++;
}
i++;
}
return (str);
}
