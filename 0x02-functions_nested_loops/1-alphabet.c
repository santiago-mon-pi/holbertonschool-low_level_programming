#include "main.h"

/**
 *print_alphabet - prints alphabet
 */

void print_alphabet(void)

{
	char ch = 'a';

	while (ch <= 'z')

	{
		_putchar(ch);
		ch++;
	}
	_putchar (10);
}
