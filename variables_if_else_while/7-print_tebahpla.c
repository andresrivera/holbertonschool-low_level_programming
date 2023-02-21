#include <stdio.h>

/**
* main - function
* description - Task 7: scrpit taht printthe lowercase alphabet in reverse
*
* Return: Always 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');

return (0);
}
