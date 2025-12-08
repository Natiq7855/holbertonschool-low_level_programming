#include "main.h"

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
}
_putchar('\n');
}