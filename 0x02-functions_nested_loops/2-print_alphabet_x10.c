#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints english alphabet ten times
 */

void print_alphabet_x10(void)

{
	int n;
	char ch;

/*loop counts to ten*/

	for (n = 0; n < 10; ++n
		)
	{
		/*inner loop prints alphabet from 'a' to 'z'*/

		for (ch = 'a'; ch <= 'z'; ++ch)

		{
			_putchar(ch);

		}

		_putchar('\n');

	}

return;

}
