#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dinemsional previously created for alloc_grid
 * @grid: parameter
 * @height: parameter
 *
 * Return: 0
 *
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
