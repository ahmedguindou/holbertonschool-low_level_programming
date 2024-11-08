#include <stdio.h>
/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: Argument count (unused).
 * @argv: Argument vector (array of strings).
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
