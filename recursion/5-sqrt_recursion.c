#include "main.h"

/**
 * _sqrt_helper - recursive helper to find square root
 * @n: number to find the square root of
 * @i: current guess
 * Return: natural square root of n, -1 if none
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* guess too high, no natural sqrt */
		return -1;
	if (i * i == n) /* found the square root */
		return i;
	return _sqrt_helper(n, i + 1); /* try next number */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: natural square root, -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* negative numbers have no natural sqrt */
		return -1;
	return _sqrt_helper(n, 1); /* start guessing from 1 */
}
