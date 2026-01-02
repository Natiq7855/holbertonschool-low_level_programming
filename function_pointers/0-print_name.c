#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: pointer to a function that takes a string and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
