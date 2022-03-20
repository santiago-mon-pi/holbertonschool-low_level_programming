#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: name
 * @f: function to print name
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
