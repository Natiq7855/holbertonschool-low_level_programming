#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Initialize hash with the magic number 5381 */
	hash = 5381;

	/* Iterate through each character of the string */
	while ((c = *str++))
	{
		/* hash * 33 + c */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}