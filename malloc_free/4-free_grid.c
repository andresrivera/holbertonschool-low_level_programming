#include <stdlib.h>
#include "main.h"

/**
* free_grid - function
* @grid: memory to free
* @height: array size
* Description: free memory of a 2-dimensional array
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[(height - 1) - i]);
free(grid);
}
