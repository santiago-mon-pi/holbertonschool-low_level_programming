#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies
 * @argc: number
 * @argv: Pointer array
 * Return: 0 to success
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
		return (0);
	}

	else

	{
		printf("Error\n");
		return (1);
	}
}
