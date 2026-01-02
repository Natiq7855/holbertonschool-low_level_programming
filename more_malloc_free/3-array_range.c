#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: Starting value
 * @max: Ending value
 *
 * Return: Pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;  /* Number of elements */

arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
