#include <stdio.h>

/**
* main - function
* description - find and print the largest prime factor of a number
*
* Return: Always 0
*/
int main(void)
{
long int n = 612852475143;
long int number;
while (number < (n / 2))
{
if ((n % 2) == 0)
{
n = n / 2;
continue;
}
for (number = 3; number < (n / 2); number += 2)
{
if ((n % number) == 0)
n /= number;
}
}
printf("%ld\n", n);
return (0); 
}
