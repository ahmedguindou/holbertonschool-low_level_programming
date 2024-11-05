#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination pointer where memory is copied to
 * @src: source pointer where memory is copied from
 * @n: number of bytes to copy
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
