#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: string to reverse
 * return: 0
 */

void print_rev(char *s)

{
	int x = 0;
	int z;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (z = x; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
