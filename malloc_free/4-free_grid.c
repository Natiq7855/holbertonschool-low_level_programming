#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid previously created
 * @grid: Pointer to the 2D array
 * @height: Number of rows in the grid
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    /* Free each row */
    for (i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
            free(grid[i]);
    }

    /* Free the array of row pointers */
    free(grid);
}
