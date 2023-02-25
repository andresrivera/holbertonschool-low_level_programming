#include <stdio.h>

/**
* main - function
* description - print fibbonaci number sequence to 50
*
* Return: Always 0;
*/
int main(void)
{
long f1 = 0;
long f2 = 1;
long fibsum;
float total;
while (1)
{
fibsum = f1 + f2;
if (fibsum > 4000000)
break;
if ((fibsum % 2) == 0)
total += fibsum;
f1 = f2;
f2 = fibsum;
}
printf("%.0f\n", total);
return (0);
}
