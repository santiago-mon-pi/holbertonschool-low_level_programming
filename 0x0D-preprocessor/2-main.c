#include <stdio.h>

/**
 * main - prints name of main input file with new line
 * Return: 0
 **/

int main(void)

{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
