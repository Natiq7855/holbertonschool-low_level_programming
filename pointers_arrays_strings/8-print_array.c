#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 *
 * Description: Prints the elements separated by ", " in the same order.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)  /* Print ", " only if not the last element */
printf(", ");
}

printf("\n");
}
