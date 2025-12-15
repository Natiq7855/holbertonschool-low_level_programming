#include "main.h"

/**
 * _is_prime - helper function to check if n is divisible by i
 * @n: number to check
 * @i: current divisor
 * Return: 1 if prime, 0 if not
 */
int _is_prime(int n, int i)
{
	if (i >= n)
		return 1;
	if (n % i == 0)
		return 0;
	return _is_prime(n, i + 1);
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return 0;
	return _is_prime(n, 2);
}
