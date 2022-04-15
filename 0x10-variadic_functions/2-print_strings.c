#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *s;

va_start(valist, n);

for (i = 0; i < n i++)
{
s = va_arg(valist, char *);

if (s)
	printf("%s", s);
else
	printf("(nil)");

if (i < n - 1)
	if (separator)
		printf("%s", separator);
}

printf("\n");
va_end(valist);
}
