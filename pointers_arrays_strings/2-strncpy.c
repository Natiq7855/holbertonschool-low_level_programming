#include "main.h"

/**
 * _strncpy - Copies at most n characters from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to dest
 *
 * Description: If src has fewer than n characters, the remainder of dest
 * is filled with null bytes. If src has n or more characters, dest is not
 * automatically null-terminated.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* Fill the rest of dest with '\0' if src is shorter than n */
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
