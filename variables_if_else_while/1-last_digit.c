#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - prints
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

/*Print the last digit*/
printf("Last digit of %d is %d", n, last_digit);
/*if*/
if (last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if (last_digit == 0)
{
printf(" and is 0\n");
}
else if (last_digit < 6 && last_digit != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
