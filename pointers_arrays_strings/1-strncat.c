#include "main.h"

/**
 * _strncat - Concatenates at most n bytes of src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string dest
 *
 * Description: Appends at most n characters from src to dest,
 * overwriting the terminating null byte of dest, then adds a null byte.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Find the end of dest */
while (dest[i] != '\0')
i++;

/* Append at most n characters from src to dest */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0'; /* Add terminating null byte */

return (dest);
}
