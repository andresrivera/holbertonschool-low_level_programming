#include <stdio.h>
#include "main.h"
/**
* swap_int - function
* @a: pointer to integer a
* @b: pointer to integer b
* Description: Swapt a and b pointer values
*
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
