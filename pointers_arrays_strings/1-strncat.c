#include "main.h"
/**
 **_strncat-*_strncat
 *@src:src
 *@dest:dest
 *@n: int
 *Return:0
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
if (n > 0)
{
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
}
return (dest);
}
