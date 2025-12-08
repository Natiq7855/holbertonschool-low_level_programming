#include "main.h"

/**
 * _strlen - Swaps the values of two integers.
 * @s: Pointer to the first integer.
 * Pointer to the second integer.
 *
 * Description: This function takes two integer pointers and swaps
 * the values stored at the addresses they point to.
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
