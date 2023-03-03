#include "main.h"

/**
* reverse_array - function
* @a: integer array pointer
* @n: integer
* Description: compare two string
*
* Return: string
*/
void reverse_array(int *a, int n)
{
int *i = a;
int t;
a = a + n - 1;
while (i < a)
{
t = *i;
*i = *a;
*a = t;
i++;
a--;
}
}
