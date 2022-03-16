#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: name input
 * @f: print function
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)

	{
		return;
	}

	(*f)(name);
}