#include "main.h"

/**
 * _strlen(char *s) - lenght of string
 */

int _strlen(char *s)

{
	int x = 0;

	while(*s != '\0')

	{
		x++;
		s++;
	}

	return x;
}
