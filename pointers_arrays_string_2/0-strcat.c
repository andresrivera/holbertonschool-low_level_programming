#include "main.h"

/**
* *_strcat - function
* @dest: string
* @src: string initial
* Description: aappende src string to dest string
*
* Return: return pointer to string d
*/
char *_strcat(char *dest, char *src)
{
  /*int n = 0;*/
  /*  while(*dest)
    {
      n++;
    }

  */
  
  char *resultado;

  resultado = strcat(src, dest);
  return (resultado);

  
}
