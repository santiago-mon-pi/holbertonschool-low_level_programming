#include <stdlib.h>

/**
 * main - mult the 1 to the 3 number
 * @argc: number
 * @argv: Pointer array
 * @m: multiplication
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
