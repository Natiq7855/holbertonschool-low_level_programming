#include "main.h"


/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to print.
 *
 * Description: This function writes each character of the string
 * pointed to by str to the standard output, followed by a newline.
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
write(1, str[i], 1);
i++;
}
write(1, "\n", 1);
}
