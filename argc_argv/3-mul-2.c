#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function
 * @argc: counts the arguments.
 * @argv: string array for the arguments entered
 *
 * Return: 0 (Sucess) 1 (fail)
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
return (0);
}
else
{
printf("Error\n");
return (1);
}
