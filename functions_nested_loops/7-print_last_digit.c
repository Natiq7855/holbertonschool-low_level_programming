#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
