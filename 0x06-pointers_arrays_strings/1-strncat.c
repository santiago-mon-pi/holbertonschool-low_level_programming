#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: variable 1
 *@src: variable 2
 *@n: input parameter
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)

	{
	}

	for (; j < n; j++, i++)

	{
		dest[i] = src[j];
		if (dest[i] == '\0')
			break;
	}

	return (dest);
}
