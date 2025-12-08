#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
int found_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;  /* Flip sign for each '-' encountered */
else if (s[i] == '+')
{
;  /* Ignore '+' */
}
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
num = num * 10 + (s[i] - '0');
}
else if (found_digit)
{
break;  /* Stop at first non-digit after digits */
}
i++;
}

return (sign * num);
}
