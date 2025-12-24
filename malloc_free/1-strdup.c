#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated duplicate of a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
char *copy;
unsigned int i, len;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
copy[i] = str[i];

return (copy);
}
