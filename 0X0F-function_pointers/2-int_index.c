#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: number of elements in array
 * @cmp: is a pointer to the function that compares values
 * Return: on succes or return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)

	{
		if (cmp(array[x]) != 0)
			return (x);

	}
		return (-1);
}
