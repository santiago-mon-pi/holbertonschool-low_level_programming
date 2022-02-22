#include "main.h"

/**
 * puts2 - prints every other character
 * @str: input string
 * Return: prints
 */

void puts2(char *str)
{
	int l = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')

	{
		y++;
		l++;
	}

	x = l - 1;

	for (o = 0 ; o <= x ; o++)

	{

		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}

	}

	_putchar('\n');
}
