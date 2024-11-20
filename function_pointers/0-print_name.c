#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char pointer as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
