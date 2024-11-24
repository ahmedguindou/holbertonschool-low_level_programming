#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - Prints anything based on a format string.
 * @format: A string of format specifiers (c, i, f, s).
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, print_sep = 0;
char *str;
const char *separator = ", ";
va_start(args, format);
while (format && format[i]) {
if (print_sep) {
printf("%s", separator);
}
switch (format[i]) {
case 'c':
printf("%c", va_arg(args, int));
print_sep = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
print_sep = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
print_sep = 1;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL) {
printf("(nil)");
} else {
printf("%s", str);
}
print_sep = 1;
break;
default:
break;
}
i++;
}
    va_end(args);
    printf("\n");
}
