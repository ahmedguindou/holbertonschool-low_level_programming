#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer where the string is copied.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
