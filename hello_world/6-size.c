#include <stdio.h>

/**
* main - function
* description - prints the size of various types
*
* Return: Alaways 0
*/
int main(void)
{
printf("Size of a char: %2d byte(s)\n", sizeof(char));
printf("Size on an int: %2d byte(s)\n", sizeof(int));
printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
printf("Size of a lon long int: %2d byte(s)\n", sizeof(long int *));
printf("Size of a float: %2d byte(s)\n", sizeof(float));
return (0);
}
