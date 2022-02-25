#include "main.h"

/**
 *_strcar - concatenates two strings
 *@dest: variable 1
 *@src: variable 2
 */

char *_strcat(char *dest, char *src)

{
	for (int i = 0; dest[i] != '\0'; i++)
	{
	}

	for (int j = 0; src[j] != '\0'; j++)
	{
		i++;
		dest[i] = sre[j];
	}

	dest[i + 1] = '\0';

	return (dest);
}
