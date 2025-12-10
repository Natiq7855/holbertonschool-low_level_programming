#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be modified
 *
 * Return: Pointer to the resulting string
 */

char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' ||s[i] == '!' || s[i] == '?' || s[i] == '"' ||s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
capitalize = 1;
}
else if (capitalize && s[i] >= 'a' && s[i] <= 'z')
{
capitalize = 0;
s[i] -= 32;
}
else if (!capitalize && s[i] >= 'A' && s[i] <= 'Z')
{
s[i] += 32;
}
else 
{
capitalzie = 0;
}
i++;
}
}
