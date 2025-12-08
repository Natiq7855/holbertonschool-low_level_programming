#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte
 *           (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

    /* Copy each character from src to dest, including the null terminator */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0'; /* Add the terminating null byte */

return dest;
}
