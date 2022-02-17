#include "main.h"

/**
 * _isupper - identifies lower and upper case characters
 * @c: character to identifie
 * Return: 1 if uppercase 0 otherwise
 */


int _isupper(int c)
{
	int CH

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		if (c == CH)
		{
			c = 1;
		}
	}

	return (c);
}
