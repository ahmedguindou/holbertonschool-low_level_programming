#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argv;  /* To avoid unused variable warning */
printf("%d\n", argc - 1);
return (0);
}
