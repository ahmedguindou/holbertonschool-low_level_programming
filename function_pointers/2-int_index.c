#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A pointer to the function to compare values.
 * Return: The index of the first element that matches, or -1 if not found or
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
