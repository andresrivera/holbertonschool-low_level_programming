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
int i, sum = 1;
/*one for app name and two for the int values */
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
sum *= atoi(argv[i]);
printf("%d\n", sum);
return (0);
}
