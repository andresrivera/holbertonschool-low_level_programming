#include <stdio.h>

/**
* main - function
* description - Task 5: Print digits from 0 to 9 usin putchar
*
* Return: Always 0
*/
int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}

return (0);
}
