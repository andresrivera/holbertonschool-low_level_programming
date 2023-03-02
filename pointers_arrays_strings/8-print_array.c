#include <stdio.h>
#include "main.h"

/**
* print_array - function
* @a: pointer to array a
* @n: number of elements of the array to be printed
* Description: prints n elements of an array
*
* Return: Always 0;
*/
void print_array(int *a, int n)
{
int i = 0;
if (a[i] != '\0')
{
for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
