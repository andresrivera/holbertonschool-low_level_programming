#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - function
* @n: pointer to integer
* Description: takes a ponter to an int as parameter and updates value to 98
*
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
