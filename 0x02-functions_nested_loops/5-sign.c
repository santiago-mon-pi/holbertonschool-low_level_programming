#include "main.h"


/**
 *print_sign - prints sign of a number
 *@n: number to define
 *Return: always 0
 */

int print_sign(int n)

{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}

	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	else
	{
		x = 0;
		_putchar(0);
		_putchar(0);
	}
	return (x);
}
