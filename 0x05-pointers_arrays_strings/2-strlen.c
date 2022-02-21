#include "main.h"

/**
 * _strlen - lenght of string
 *@s: variable
 *return: returns varaible x
 */

int _strlen(char *s)

{
	int x = 0;

	while (*s != '\0')

	{
		x++;
		s++;
	}

	return (x);
}
