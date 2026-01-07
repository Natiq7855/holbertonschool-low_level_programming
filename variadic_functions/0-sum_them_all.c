#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them all.c - sum all integers
* @n - count of integers
*/

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
sum = 0;
va_start(args, n);
if (n == 0)
return(0);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
