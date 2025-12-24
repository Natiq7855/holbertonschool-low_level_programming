#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: Pointer to the allocated 2D array, or NULL on failure
 *         or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}


for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
        if (grid[i] != NULL)
            free(grid[i]);
    }
}


for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
