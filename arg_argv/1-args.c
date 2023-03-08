#include <stdio.h>
#include "main.h"

/**
* main - function
* @argc: number of arguments
* @argv: array of arguments
* Description: print number of arguments 
*
* (void) argv - ignore argv
* Return: Always 0
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
