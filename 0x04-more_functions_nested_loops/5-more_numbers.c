#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 ten times
 */

void more_numbers(void)

{
	int n;
	char d;

	for (n = 0; n < 10; n++)

	{
		for (d = 0; d <= 14; d++)

		{
			if (c > 9)
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
		}

		_putchar('\n');

	}

}
