#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to be scanned
 * @accept: the string containing the characters to match
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int j;
while (s[count])
{
for (j = 0; accept[j]; j++)
{
if (s[count] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
break;
}
count++;
}
return (count);
}
