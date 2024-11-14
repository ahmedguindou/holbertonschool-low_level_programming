#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if insufficient
 * memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
unsigned int length, i;
char *dup_str;
if (str == NULL)
return (NULL);
length = strlen(str);
dup_str = malloc(sizeof(char) * (length + 1));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= length; i++)
dup_str[i] = str[i];
return (dup_str);
}
