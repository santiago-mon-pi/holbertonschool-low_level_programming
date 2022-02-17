#include "main.h"

/**
 * print_last_digit - prints last digit
 * @x: input
 * Return: varies
 */

int print_last_digit(int x)

{
	int a;

	a = x % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
