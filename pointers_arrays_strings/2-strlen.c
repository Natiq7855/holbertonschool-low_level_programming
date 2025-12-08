#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function calculates the number of characters
 * in the string pointed to by s, not including the null terminator.
 *
 * Return: The length of the string.
 */
 
int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
