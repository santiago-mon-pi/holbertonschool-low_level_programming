#include "main.h"

/**
 *_strcar - concatenates two strings
 *@dest: variable 1
 *@src: variable 2
 */

char *_strcat(char *dest, char *src)

{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)

	{
	}

	for (j = 0; src[j] != '\0'; j++, i++)

	{
		dest[i] = src[j];
	}

	return (dest);
}
