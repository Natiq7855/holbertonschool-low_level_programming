#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (!*needle)  /* If needle is empty, return haystack */
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')  /* Found the whole substring */
return (&haystack[i]);
}

return (NULL);  /* Substring not found */
}
