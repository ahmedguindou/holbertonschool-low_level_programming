#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 if successful, 1 if error occurs.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
