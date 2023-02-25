#include <stdio.h>

/**
* main - function
* description - print fibbonaci number sequence to 50
*
* Return: Always 0;
*/
int main(void)
{
int i;
long x = 1;
long y = 2;
int runX = 1;
printf("%ld, %ld,", x, y);
for (i = 0; i < 48; i++)
{
if (runX == 1)
{
x += y;
printf(" %ld", x);
runX = 0;
}
else
{
y += x;
printf(" %ld", y);
runX = 1;
}
if (i != 47)
printf(",");
}
printf("\n");
return (0);
}
