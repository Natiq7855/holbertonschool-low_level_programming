#include <stdlib.h>

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
        return (NULL);

    /* Allocate memory for the array of row pointers */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Free previously allocated rows if malloc fails */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize all elements in the row to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
