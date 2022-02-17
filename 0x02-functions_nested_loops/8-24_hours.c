#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: On success 1.
 */

void jack_bauer(void)
{
	int x, z, c, k;

	for (x = 0; x <= 2; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (k = 0; k <= 9; k++)
				{
					if ((x == 2) && (z > 3))
					{
						break;
					}
					_putchar(x % 10 + '0');
					_putchar(z % 10 + '0');
					_putchar(58);
					_putchar(c % 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(10);
				}
			}
		}
	}
}
