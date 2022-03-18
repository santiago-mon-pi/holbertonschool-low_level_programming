#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers n
 * @separator: Separator string
 * @n: n integer to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (separator == NULL)
		{
			continue;
		}
		else if (i == (n - 1))
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(l);
}
