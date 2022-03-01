#include "main.h"

/**
 *_memset - fill block memory with specific value
 *@s: pointer
 *@n: number of bytes
 *@b: input
 *Return: return s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsingned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
