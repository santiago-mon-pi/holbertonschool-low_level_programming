#include <stdio.h>
/**
* main - input entry
* Return: 0 Success
*/

int main(void)
{
	int x;

	for (x = x; x < 100; x++)
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}

	printf("Buzz");
	printf("\n");
	return (0);
}
