#include "main.h"

/**
 * print_square - prints a square using '#' characters
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)          /* rows */
	{
		for (j = 0; j < size; j++)      /* columns */
			_putchar('#');
		_putchar('\n');                 /* new line after each row */
	}
}
