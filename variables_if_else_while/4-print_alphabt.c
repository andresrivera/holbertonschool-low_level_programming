#include <stdio.h>

/**
* main - function
* description - Task 4: When I was having that alphabet soup
*
* Return: Always 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
