#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination memory (is stored)
 *@src: source memory (gets copied)
 *@n: number of bytes
 *Return: dest memory with n bytes copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int x = 0;
	int i = n;

	for (; x < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
