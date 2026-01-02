#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to print.
 *
 * Description: Loops through the string, printing characters at
 * even indices (0, 2, 4, ...) using _putchar, followed by a newline.
 */

void puts2(char *str)
{
int len = 0;
while (str[len] != '\0')
{
if (len % 2 == 0)
{
_putchar(str[len]);
}
len++;
}
_putchar('\n');
}
