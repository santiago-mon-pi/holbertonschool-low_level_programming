#include "main.h"

/**
 * _abs - computes absolute value
 * @z: input
 * Return: varies
 */

int _abs(int z)
{
	int x;

	if (z >= 0)
	{
		x = z;
	}
	else if (z < 0)
	{
		x = z * -1;
	}
	return (x);
}
