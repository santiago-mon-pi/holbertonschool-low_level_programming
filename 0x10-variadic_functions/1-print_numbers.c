#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers n
 * @separator: Separator string
 * @n: n integer to print
 */

{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
