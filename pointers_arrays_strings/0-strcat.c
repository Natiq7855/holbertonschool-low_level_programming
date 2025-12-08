#include "main.h"

/**
 * _strcat - Concatenates the src string to the dest string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 *
 * Description: Appends src to dest, overwriting the terminating null byte,
 * and then adds a terminating null byte.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
        i++;

    /* Append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; /* Add terminating null byte */

    return (dest);
}
