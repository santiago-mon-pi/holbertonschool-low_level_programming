#include "main.h"

/**
 * _strlen - lenght of string
 *@s: variable
 *Return: returns variable x
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
