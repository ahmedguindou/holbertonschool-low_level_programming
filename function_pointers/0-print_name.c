#include "function_pointers.h"
/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char pointer as an argument.
 * Description: If the function pointer `f` is not NULL, it calls `f`
 *              with the `name` as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
