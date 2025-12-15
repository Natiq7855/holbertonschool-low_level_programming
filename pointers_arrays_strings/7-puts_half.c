#include "main.h"


/**
 * puts_half - Prints the second half of a string, followed by a newline.
 * @str: Pointer to the string to print.
 *
 * Description: If the length is odd, prints the last (len + 1)/2 characters.
 */

void puts_half(char *str)
{
int n;
int i = 0;
while (str[i] != '\0')
{
i++;
}
n = (i + 1) / 2;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
