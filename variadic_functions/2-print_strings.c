#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If a string is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Grab the string once per loop */
		str = va_arg(args, char *);

		/* Check if the string exists */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* Print separator only if it exists and we aren't at the last string */
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
