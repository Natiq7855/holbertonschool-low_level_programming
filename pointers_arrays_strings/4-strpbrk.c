#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to look for
 *
 * Return: Pointer to the first occurrence in s of any byte from accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int a = 0;
unsigned int t = 0;

while (accept[a] != '\0')
{
a++;
}
while (s[i] != '\0')
{
for (t = 0; t < a; t++)
{
if (s[i] == accept[t])
{
return (&s[i]);
}
}
i++;
}
return (NULL);
}
