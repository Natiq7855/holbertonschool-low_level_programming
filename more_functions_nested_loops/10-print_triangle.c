#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)         /* rows */
	{
		for (j = 1; j <= size - i; j++) /* spaces before '#' */
			_putchar(' ');

		for (j = 1; j <= i; j++)        /* '#' characters */
			_putchar('#');

		_putchar('\n');                 /* newline after each row */
	}
}
