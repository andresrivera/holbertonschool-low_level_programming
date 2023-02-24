#include <stdio.h>
#include "main.h"

/**
* main - main function
* description - Print numbers from 1 to 100 and write Fizz and Buzz for 3 mult
*
* Return: Always 0
*/
int main(void)
{
int n;
for (n = 1; n < 100; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
if (n % 3 == 0)
{
printf("Fizz");
}
if (n % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", n);
}
printf(" ");
}
printf(" ");
return (0);
}
