#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 ten times
 */

void more_numbers(void)

{
	int n;
	char di;

	for (n = 0; n < 10; ++n)

	{

		for (di = 0; di <= 14; ++di)

		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');

		}

		_putchar('\n');

	}

return;

}
