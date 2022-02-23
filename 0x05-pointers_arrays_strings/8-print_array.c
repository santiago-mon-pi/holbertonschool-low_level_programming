#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: first variable
 * @n: second variable
 * Return: v
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < (n - 1); x++)

	{
		_putchar("%d, ", a[x]);
	}
		if (x == (n - 1))

		{
			_putchar("%d", a[n - 1]);
		}
			_putchar("\n");
}
