#include "main.h"

/**
* rev_string - reverses string
* @s: string to reverse
* Return: reversed string
*/

void rev_string(char *s)

{
	char rev = s[0];

	int count = 0;

	int x;

	while (s[count] != '\0')

		count++;

	for (x = 0; x < count; x++)

	{
		count--;
		rev = s[x];
		s[x] = s[count];
		s[count] = rev;
	}
}
