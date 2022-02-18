#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 ten times
 */

void more_numbers(void)

{
	int n;
	int di;

/*loop counts to ten*/

	for (n = 0; n < 10; ++n)
	{
		/*inner loop prints digits from '0' to '14'*/

		for (di = '0'; di <= '14'; ++di)

		{
			_putchar(di);

		}

		_putchar('\n');

	}

return;

}
