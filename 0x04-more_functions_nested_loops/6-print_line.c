#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 * Return: Always 0.
 */
void print_line(int n)
{
	char x;

		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
