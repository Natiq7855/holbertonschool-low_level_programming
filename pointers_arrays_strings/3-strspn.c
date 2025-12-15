#include "main.h"


/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check
 * @accept: The characters to match
 *
 * Return: Number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, t, a = 0, b = 0;
int check;
while (accept[a] != '\0')
{
a++;
}
while (s[i] != '\0')
{
check = 0;
for (t = 0; t < a; t++)
{
if (accept[t] == s[i])
{
check = 1;
break;
}
}
if (check == 1)
{
b++;
}
else
{
break;
}
i++;
}
return (b);
}
