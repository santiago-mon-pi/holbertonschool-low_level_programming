#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if ((abc != 'e') && (abc != 'q'))
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}
