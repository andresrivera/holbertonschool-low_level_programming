#include "main.h"

/**
* rev_string - function
* @s: pointer type char s
* Description: Function that prints a string in reversee
* Return: Always 0
*/
void rev_string(char *s)
{
int n = 0;
int b = 0;
char revString;
while (s[n] != 0)
{
n++;
}
n--;
for (b = 0; b <= n; n--, b++)
{
revString = s[b];
s[b] = s[n];
s[n] = revString;
}
}
