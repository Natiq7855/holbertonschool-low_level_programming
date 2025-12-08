#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The integer value of the string
 *
 * Description: Stops accumulating if the next digit would cause overflow.
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
int found_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] == '+')
{
;
}
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;

/* Check for potential overflow before multiplying/adding */
if (num > (2147483647 - (s[i] - '0')) / 10)
{
if (sign == 1)
{
return 2147483647; /* Clamp to INT_MAX */
}
else
{
return -2147483648; /* Clamp to INT_MIN */
}
}

num = num * 10 + (s[i] - '0');
}
else if (found_digit)
{
break;
}
i++;
}

return (sign * num);
}
